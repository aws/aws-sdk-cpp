/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/Tags.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class CreateAnycastIpList2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API CreateAnycastIpList2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnycastIpList"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Name of the Anycast static IP list.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateAnycastIpList2020_05_31Request& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAnycastIpList2020_05_31Request& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAnycastIpList2020_05_31Request& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of static IP addresses that are allocated to the Anycast static IP
     * list.</p>
     */
    inline int GetIpCount() const{ return m_ipCount; }
    inline bool IpCountHasBeenSet() const { return m_ipCountHasBeenSet; }
    inline void SetIpCount(int value) { m_ipCountHasBeenSet = true; m_ipCount = value; }
    inline CreateAnycastIpList2020_05_31Request& WithIpCount(int value) { SetIpCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Tags& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Tags& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Tags&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateAnycastIpList2020_05_31Request& WithTags(const Tags& value) { SetTags(value); return *this;}
    inline CreateAnycastIpList2020_05_31Request& WithTags(Tags&& value) { SetTags(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_ipCount;
    bool m_ipCountHasBeenSet = false;

    Tags m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
