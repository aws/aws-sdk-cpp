/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about a source repository returned in a list of source
   * repositories.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListSourceRepositoriesItem">AWS
   * API Reference</a></p>
   */
  class ListSourceRepositoriesItem
  {
  public:
    AWS_CODECATALYST_API ListSourceRepositoriesItem();
    AWS_CODECATALYST_API ListSourceRepositoriesItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API ListSourceRepositoriesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-generated unique ID of the source repository.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The system-generated unique ID of the source repository.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The system-generated unique ID of the source repository.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The system-generated unique ID of the source repository.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The system-generated unique ID of the source repository.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The system-generated unique ID of the source repository.</p>
     */
    inline ListSourceRepositoriesItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the source repository.</p>
     */
    inline ListSourceRepositoriesItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the source repository.</p>
     */
    inline ListSourceRepositoriesItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the source repository.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the source repository.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the source repository.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the source repository.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the source repository.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the source repository.</p>
     */
    inline ListSourceRepositoriesItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the source repository.</p>
     */
    inline ListSourceRepositoriesItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the source repository.</p>
     */
    inline ListSourceRepositoriesItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the repository, if any.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the repository, if any.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the repository, if any.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the repository, if any.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the repository, if any.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the repository, if any.</p>
     */
    inline ListSourceRepositoriesItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the repository, if any.</p>
     */
    inline ListSourceRepositoriesItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the repository, if any.</p>
     */
    inline ListSourceRepositoriesItem& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The time the source repository was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time the source repository was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time the source repository was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time the source repository was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time the source repository was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline ListSourceRepositoriesItem& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time the source repository was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline ListSourceRepositoriesItem& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The time the source repository was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time the source repository was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time the source repository was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time the source repository was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time the source repository was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline ListSourceRepositoriesItem& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time the source repository was created, in coordinated universal time
     * (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline ListSourceRepositoriesItem& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
