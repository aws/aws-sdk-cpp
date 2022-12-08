/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about a custom data identifier.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BatchGetCustomDataIdentifierSummary">AWS
   * API Reference</a></p>
   */
  class BatchGetCustomDataIdentifierSummary
  {
  public:
    AWS_MACIE2_API BatchGetCustomDataIdentifierSummary();
    AWS_MACIE2_API BatchGetCustomDataIdentifierSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BatchGetCustomDataIdentifierSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom data identifier.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the custom data
     * identifier was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the custom data
     * identifier was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the custom data
     * identifier was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the custom data
     * identifier was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the custom data
     * identifier was created.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the custom data
     * identifier was created.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the custom data identifier was deleted. If you delete a
     * custom data identifier, Amazon Macie doesn't delete it permanently. Instead, it
     * soft deletes the identifier.</p>
     */
    inline bool GetDeleted() const{ return m_deleted; }

    /**
     * <p>Specifies whether the custom data identifier was deleted. If you delete a
     * custom data identifier, Amazon Macie doesn't delete it permanently. Instead, it
     * soft deletes the identifier.</p>
     */
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }

    /**
     * <p>Specifies whether the custom data identifier was deleted. If you delete a
     * custom data identifier, Amazon Macie doesn't delete it permanently. Instead, it
     * soft deletes the identifier.</p>
     */
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }

    /**
     * <p>Specifies whether the custom data identifier was deleted. If you delete a
     * custom data identifier, Amazon Macie doesn't delete it permanently. Instead, it
     * soft deletes the identifier.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithDeleted(bool value) { SetDeleted(value); return *this;}


    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The custom description of the custom data identifier.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the custom data identifier.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The custom name of the custom data identifier.</p>
     */
    inline BatchGetCustomDataIdentifierSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    bool m_deleted;
    bool m_deletedHasBeenSet = false;

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
