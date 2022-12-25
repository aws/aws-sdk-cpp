/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>Represents a EULA resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/Eula">AWS API
   * Reference</a></p>
   */
  class Eula
  {
  public:
    AWS_NIMBLESTUDIO_API Eula();
    AWS_NIMBLESTUDIO_API Eula(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Eula& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The EULA content.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The EULA content.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The EULA content.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The EULA content.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The EULA content.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The EULA content.</p>
     */
    inline Eula& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The EULA content.</p>
     */
    inline Eula& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The EULA content.</p>
     */
    inline Eula& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline Eula& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline Eula& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The EULA ID.</p>
     */
    inline const Aws::String& GetEulaId() const{ return m_eulaId; }

    /**
     * <p>The EULA ID.</p>
     */
    inline bool EulaIdHasBeenSet() const { return m_eulaIdHasBeenSet; }

    /**
     * <p>The EULA ID.</p>
     */
    inline void SetEulaId(const Aws::String& value) { m_eulaIdHasBeenSet = true; m_eulaId = value; }

    /**
     * <p>The EULA ID.</p>
     */
    inline void SetEulaId(Aws::String&& value) { m_eulaIdHasBeenSet = true; m_eulaId = std::move(value); }

    /**
     * <p>The EULA ID.</p>
     */
    inline void SetEulaId(const char* value) { m_eulaIdHasBeenSet = true; m_eulaId.assign(value); }

    /**
     * <p>The EULA ID.</p>
     */
    inline Eula& WithEulaId(const Aws::String& value) { SetEulaId(value); return *this;}

    /**
     * <p>The EULA ID.</p>
     */
    inline Eula& WithEulaId(Aws::String&& value) { SetEulaId(std::move(value)); return *this;}

    /**
     * <p>The EULA ID.</p>
     */
    inline Eula& WithEulaId(const char* value) { SetEulaId(value); return *this;}


    /**
     * <p>The name for the EULA.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the EULA.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the EULA.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the EULA.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the EULA.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the EULA.</p>
     */
    inline Eula& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the EULA.</p>
     */
    inline Eula& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the EULA.</p>
     */
    inline Eula& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline Eula& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline Eula& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_eulaId;
    bool m_eulaIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
