/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#pragma once

#include <OptionalDbValue.h>
#include <DynamoDbDataRow.h>

#include <ctime>

namespace Aws
{
namespace Example1
{

class PlayerData : public DynamoDBDataRow<PlayerData>
{
    public:

        typedef DynamoDBDataRow<PlayerData> Base;

        PlayerData(const Aws::String& playerName, const Aws::String& identityKey);

    private:

        friend class DynamoDBDataRow<PlayerData>;
        friend std::ostream& operator<<(std::ostream& os, const PlayerData& playerData);

        Aws::String m_playerName;

        OptionalDbString m_displayName;
        uint32_t m_tokens;
        uint32_t m_highScore;
        uint32_t m_secondsPlayed;
        OptionalDbValue<std::time_t> m_lastTimePlayed;

};

std::ostream& operator<<(std::ostream& os, const PlayerData& playerData);


} // namespace Example1
} // namespace Aws
