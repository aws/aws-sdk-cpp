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
#include <aws/dynamodb/model/TimeToLiveStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>The description of the Time to Live (TTL) status on the specified table.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TimeToLiveDescription">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API TimeToLiveDescription
  {
  public:
    TimeToLiveDescription();
    TimeToLiveDescription(Aws::Utils::Json::JsonView jsonValue);
    TimeToLiveDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The TTL status for the table.</p>
     */
    inline const TimeToLiveStatus& GetTimeToLiveStatus() const{ return m_timeToLiveStatus; }

    /**
     * <p> The TTL status for the table.</p>
     */
    inline bool TimeToLiveStatusHasBeenSet() const { return m_timeToLiveStatusHasBeenSet; }

    /**
     * <p> The TTL status for the table.</p>
     */
    inline void SetTimeToLiveStatus(const TimeToLiveStatus& value) { m_timeToLiveStatusHasBeenSet = true; m_timeToLiveStatus = value; }

    /**
     * <p> The TTL status for the table.</p>
     */
    inline void SetTimeToLiveStatus(TimeToLiveStatus&& value) { m_timeToLiveStatusHasBeenSet = true; m_timeToLiveStatus = std::move(value); }

    /**
     * <p> The TTL status for the table.</p>
     */
    inline TimeToLiveDescription& WithTimeToLiveStatus(const TimeToLiveStatus& value) { SetTimeToLiveStatus(value); return *this;}

    /**
     * <p> The TTL status for the table.</p>
     */
    inline TimeToLiveDescription& WithTimeToLiveStatus(TimeToLiveStatus&& value) { SetTimeToLiveStatus(std::move(value)); return *this;}


    /**
     * <p> The name of the TTL attribute for items in the table.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p> The name of the TTL attribute for items in the table.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p> The name of the TTL attribute for items in the table.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p> The name of the TTL attribute for items in the table.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p> The name of the TTL attribute for items in the table.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p> The name of the TTL attribute for items in the table.</p>
     */
    inline TimeToLiveDescription& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p> The name of the TTL attribute for items in the table.</p>
     */
    inline TimeToLiveDescription& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p> The name of the TTL attribute for items in the table.</p>
     */
    inline TimeToLiveDescription& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}

  private:

    TimeToLiveStatus m_timeToLiveStatus;
    bool m_timeToLiveStatusHasBeenSet;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
