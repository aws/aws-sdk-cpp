/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/macie2/model/AllowListCriteria.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class UpdateAllowListRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API UpdateAllowListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAllowList"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression that defines a text pattern to ignore
     * (regex).</p> <p>You can change a list's underlying criteria, such as the name of
     * the S3 object or the regular expression to use. However, you can't change the
     * type from s3WordsList to regex or the other way around.</p>
     */
    inline const AllowListCriteria& GetCriteria() const{ return m_criteria; }

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression that defines a text pattern to ignore
     * (regex).</p> <p>You can change a list's underlying criteria, such as the name of
     * the S3 object or the regular expression to use. However, you can't change the
     * type from s3WordsList to regex or the other way around.</p>
     */
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression that defines a text pattern to ignore
     * (regex).</p> <p>You can change a list's underlying criteria, such as the name of
     * the S3 object or the regular expression to use. However, you can't change the
     * type from s3WordsList to regex or the other way around.</p>
     */
    inline void SetCriteria(const AllowListCriteria& value) { m_criteriaHasBeenSet = true; m_criteria = value; }

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression that defines a text pattern to ignore
     * (regex).</p> <p>You can change a list's underlying criteria, such as the name of
     * the S3 object or the regular expression to use. However, you can't change the
     * type from s3WordsList to regex or the other way around.</p>
     */
    inline void SetCriteria(AllowListCriteria&& value) { m_criteriaHasBeenSet = true; m_criteria = std::move(value); }

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression that defines a text pattern to ignore
     * (regex).</p> <p>You can change a list's underlying criteria, such as the name of
     * the S3 object or the regular expression to use. However, you can't change the
     * type from s3WordsList to regex or the other way around.</p>
     */
    inline UpdateAllowListRequest& WithCriteria(const AllowListCriteria& value) { SetCriteria(value); return *this;}

    /**
     * <p>The criteria that specify the text or text pattern to ignore. The criteria
     * can be the location and name of an S3 object that lists specific text to ignore
     * (s3WordsList), or a regular expression that defines a text pattern to ignore
     * (regex).</p> <p>You can change a list's underlying criteria, such as the name of
     * the S3 object or the regular expression to use. However, you can't change the
     * type from s3WordsList to regex or the other way around.</p>
     */
    inline UpdateAllowListRequest& WithCriteria(AllowListCriteria&& value) { SetCriteria(std::move(value)); return *this;}


    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline UpdateAllowListRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline UpdateAllowListRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description of the allow list. The description can contain as many
     * as 512 characters.</p>
     */
    inline UpdateAllowListRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline UpdateAllowListRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline UpdateAllowListRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Macie resource that the request applies
     * to.</p>
     */
    inline UpdateAllowListRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline UpdateAllowListRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline UpdateAllowListRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A custom name for the allow list. The name can contain as many as 128
     * characters.</p>
     */
    inline UpdateAllowListRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    AllowListCriteria m_criteria;
    bool m_criteriaHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
