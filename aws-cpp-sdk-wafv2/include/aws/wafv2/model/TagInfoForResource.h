/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/Tag.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   *  <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p>  <p>The collection of tagging definitions
   * for an AWS resource. Tags are key:value pairs that you can use to categorize and
   * manage your resources, for purposes like billing or other management. Typically,
   * the tag key represents a category, such as "environment", and the tag value
   * represents a specific value within that category, such as "test," "development,"
   * or "production". Or you might set the tag key to "customer" and the value to the
   * customer name or ID. You can specify one or more tags to add to each AWS
   * resource, up to 50 tags for a resource.</p> <p>You can tag the AWS resources
   * that you manage through AWS WAF: web ACLs, rule groups, IP sets, and regex
   * pattern sets. You can't manage or view tags through the AWS WAF console.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/TagInfoForResource">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API TagInfoForResource
  {
  public:
    TagInfoForResource();
    TagInfoForResource(Aws::Utils::Json::JsonView jsonValue);
    TagInfoForResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline TagInfoForResource& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline TagInfoForResource& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline TagInfoForResource& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The array of <a>Tag</a> objects defined for the resource. </p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>The array of <a>Tag</a> objects defined for the resource. </p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>The array of <a>Tag</a> objects defined for the resource. </p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>The array of <a>Tag</a> objects defined for the resource. </p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>The array of <a>Tag</a> objects defined for the resource. </p>
     */
    inline TagInfoForResource& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>The array of <a>Tag</a> objects defined for the resource. </p>
     */
    inline TagInfoForResource& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>The array of <a>Tag</a> objects defined for the resource. </p>
     */
    inline TagInfoForResource& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>The array of <a>Tag</a> objects defined for the resource. </p>
     */
    inline TagInfoForResource& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
