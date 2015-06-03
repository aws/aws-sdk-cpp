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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/StreamViewType.h>

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
  /*
    $shape.documentation
  */
  class AWS_DYNAMODB_API StreamSpecification
  {
  public:
    StreamSpecification();
    StreamSpecification(const Aws::Utils::Json::JsonValue& jsonValue);
    StreamSpecification& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline bool GetStreamEnabled() const{ return m_streamEnabled; }
    
    inline void SetStreamEnabled(bool value) { m_streamEnabledHasBeenSet = true; m_streamEnabled = value; }

    
    inline StreamSpecification&  WithStreamEnabled(bool value) { SetStreamEnabled(value); return *this;}

    
    inline const StreamViewType& GetStreamViewType() const{ return m_streamViewType; }
    
    inline void SetStreamViewType(const StreamViewType& value) { m_streamViewTypeHasBeenSet = true; m_streamViewType = value; }

    
    inline StreamSpecification&  WithStreamViewType(const StreamViewType& value) { SetStreamViewType(value); return *this;}

  private:
    bool m_streamEnabled;
    bool m_streamEnabledHasBeenSet;
    StreamViewType m_streamViewType;
    bool m_streamViewTypeHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
