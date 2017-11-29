/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ContinuousBackupsStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the backup and restore settings on the table when the backup was
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ContinuousBackupsDescription">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API ContinuousBackupsDescription
  {
  public:
    ContinuousBackupsDescription();
    ContinuousBackupsDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    ContinuousBackupsDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ContinuousBackupsStatus can be one of the following states : ENABLED,
     * DISABLED</p>
     */
    inline const ContinuousBackupsStatus& GetContinuousBackupsStatus() const{ return m_continuousBackupsStatus; }

    /**
     * <p>ContinuousBackupsStatus can be one of the following states : ENABLED,
     * DISABLED</p>
     */
    inline void SetContinuousBackupsStatus(const ContinuousBackupsStatus& value) { m_continuousBackupsStatusHasBeenSet = true; m_continuousBackupsStatus = value; }

    /**
     * <p>ContinuousBackupsStatus can be one of the following states : ENABLED,
     * DISABLED</p>
     */
    inline void SetContinuousBackupsStatus(ContinuousBackupsStatus&& value) { m_continuousBackupsStatusHasBeenSet = true; m_continuousBackupsStatus = std::move(value); }

    /**
     * <p>ContinuousBackupsStatus can be one of the following states : ENABLED,
     * DISABLED</p>
     */
    inline ContinuousBackupsDescription& WithContinuousBackupsStatus(const ContinuousBackupsStatus& value) { SetContinuousBackupsStatus(value); return *this;}

    /**
     * <p>ContinuousBackupsStatus can be one of the following states : ENABLED,
     * DISABLED</p>
     */
    inline ContinuousBackupsDescription& WithContinuousBackupsStatus(ContinuousBackupsStatus&& value) { SetContinuousBackupsStatus(std::move(value)); return *this;}

  private:

    ContinuousBackupsStatus m_continuousBackupsStatus;
    bool m_continuousBackupsStatusHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
