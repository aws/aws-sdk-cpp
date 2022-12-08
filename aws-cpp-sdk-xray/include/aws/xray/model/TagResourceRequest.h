/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/Tag.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Number (ARN) of an X-Ray group or sampling rule.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Number (ARN) of an X-Ray group or sampling rule.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of an X-Ray group or sampling rule.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of an X-Ray group or sampling rule.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of an X-Ray group or sampling rule.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of an X-Ray group or sampling rule.</p>
     */
    inline TagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of an X-Ray group or sampling rule.</p>
     */
    inline TagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of an X-Ray group or sampling rule.</p>
     */
    inline TagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group or sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use. You cannot edit or delete system tags.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group or sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use. You cannot edit or delete system tags.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group or sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use. You cannot edit or delete system tags.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group or sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use. You cannot edit or delete system tags.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group or sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use. You cannot edit or delete system tags.</p> </li> </ul>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group or sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use. You cannot edit or delete system tags.</p> </li> </ul>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group or sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use. You cannot edit or delete system tags.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A map that contains one or more tag keys and tag values to attach to an X-Ray
     * group or sampling rule. For more information about ways to use tags, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p>The following restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of user-applied tags per resource: 50</p> </li> <li>
     * <p>Maximum tag key length: 128 Unicode characters</p> </li> <li> <p>Maximum tag
     * value length: 256 Unicode characters</p> </li> <li> <p>Valid values for key and
     * value: a-z, A-Z, 0-9, space, and the following characters: _ . : / = + - and
     * @</p> </li> <li> <p>Tag keys and values are case sensitive.</p> </li> <li>
     * <p>Don't use <code>aws:</code> as a prefix for keys; it's reserved for Amazon
     * Web Services use. You cannot edit or delete system tags.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
