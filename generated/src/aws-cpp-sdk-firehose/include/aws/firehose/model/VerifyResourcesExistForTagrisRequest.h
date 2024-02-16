/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/TagrisSweepListItem.h>
#include <utility>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   */
  class VerifyResourcesExistForTagrisRequest : public FirehoseRequest
  {
  public:
    AWS_FIREHOSE_API VerifyResourcesExistForTagrisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifyResourcesExistForTagris"; }

    AWS_FIREHOSE_API Aws::String SerializePayload() const override;

    AWS_FIREHOSE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
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
    bool m_tagrisSweepListHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
