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
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/TagrisSweepListItem.h>
#include <utility>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class AWS_IOTEVENTS_API VerifyResourcesExistForTagrisRequest : public IoTEventsRequest
  {
  public:
    VerifyResourcesExistForTagrisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifyResourcesExistForTagris"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::Vector<TagrisSweepListItem>& GetTagrisSweepList() const{ return m_tagrisSweepList; }

    
    inline bool TagrisSweepListHasBeenSet() const { return m_tagrisSweepListHasBeenSet; }

    
    inline void SetTagrisSweepList(const Aws::Vector<TagrisSweepListItem>& value) { m_tagrisSweepListHasBeenSet = true; m_tagrisSweepList = value; }

    
    inline void SetTagrisSweepList(Aws::Vector<TagrisSweepListItem>&& value) { m_tagrisSweepListHasBeenSet = true; m_tagrisSweepList = std::move(value); }

    
    inline VerifyResourcesExistForTagrisRequest& WithTagrisSweepList(const Aws::Vector<TagrisSweepListItem>& value) { SetTagrisSweepList(value); return *this;}

    
    inline VerifyResourcesExistForTagrisRequest& WithTagrisSweepList(Aws::Vector<TagrisSweepListItem>&& value) { SetTagrisSweepList(std::move(value)); return *this;}

    
    inline VerifyResourcesExistForTagrisRequest& AddTagrisSweepList(const TagrisSweepListItem& value) { m_tagrisSweepListHasBeenSet = true; m_tagrisSweepList.push_back(value); return *this; }

    
    inline VerifyResourcesExistForTagrisRequest& AddTagrisSweepList(TagrisSweepListItem&& value) { m_tagrisSweepListHasBeenSet = true; m_tagrisSweepList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TagrisSweepListItem> m_tagrisSweepList;
    bool m_tagrisSweepListHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
