/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TimeToLiveDescription
  {
  public:
    AWS_DYNAMODB_API TimeToLiveDescription() = default;
    AWS_DYNAMODB_API TimeToLiveDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API TimeToLiveDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The TTL status for the table.</p>
     */
    inline TimeToLiveStatus GetTimeToLiveStatus() const { return m_timeToLiveStatus; }
    inline bool TimeToLiveStatusHasBeenSet() const { return m_timeToLiveStatusHasBeenSet; }
    inline void SetTimeToLiveStatus(TimeToLiveStatus value) { m_timeToLiveStatusHasBeenSet = true; m_timeToLiveStatus = value; }
    inline TimeToLiveDescription& WithTimeToLiveStatus(TimeToLiveStatus value) { SetTimeToLiveStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the TTL attribute for items in the table.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    TimeToLiveDescription& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}
  private:

    TimeToLiveStatus m_timeToLiveStatus{TimeToLiveStatus::NOT_SET};
    bool m_timeToLiveStatusHasBeenSet = false;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
