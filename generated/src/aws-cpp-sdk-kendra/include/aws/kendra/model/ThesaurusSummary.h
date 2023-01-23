/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/ThesaurusStatus.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>An array of summary information for a thesaurus or multiple
   * thesauri.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ThesaurusSummary">AWS
   * API Reference</a></p>
   */
  class ThesaurusSummary
  {
  public:
    AWS_KENDRA_API ThesaurusSummary();
    AWS_KENDRA_API ThesaurusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ThesaurusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline ThesaurusSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline ThesaurusSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the thesaurus.</p>
     */
    inline ThesaurusSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the thesaurus.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the thesaurus.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the thesaurus.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the thesaurus.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the thesaurus.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the thesaurus.</p>
     */
    inline ThesaurusSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the thesaurus.</p>
     */
    inline ThesaurusSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the thesaurus.</p>
     */
    inline ThesaurusSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the thesaurus.</p>
     */
    inline const ThesaurusStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the thesaurus.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the thesaurus.</p>
     */
    inline void SetStatus(const ThesaurusStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the thesaurus.</p>
     */
    inline void SetStatus(ThesaurusStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the thesaurus.</p>
     */
    inline ThesaurusSummary& WithStatus(const ThesaurusStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the thesaurus.</p>
     */
    inline ThesaurusSummary& WithStatus(ThesaurusStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Unix datetime that the thesaurus was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix datetime that the thesaurus was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix datetime that the thesaurus was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix datetime that the thesaurus was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix datetime that the thesaurus was created.</p>
     */
    inline ThesaurusSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix datetime that the thesaurus was created.</p>
     */
    inline ThesaurusSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix datetime that the thesaurus was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix datetime that the thesaurus was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The Unix datetime that the thesaurus was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The Unix datetime that the thesaurus was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The Unix datetime that the thesaurus was last updated.</p>
     */
    inline ThesaurusSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix datetime that the thesaurus was last updated.</p>
     */
    inline ThesaurusSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ThesaurusStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
