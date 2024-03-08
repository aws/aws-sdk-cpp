/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the form entry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/FormEntryInput">AWS
   * API Reference</a></p>
   */
  class FormEntryInput
  {
  public:
    AWS_DATAZONE_API FormEntryInput();
    AWS_DATAZONE_API FormEntryInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API FormEntryInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether a form entry is required.</p>
     */
    inline bool GetRequired() const{ return m_required; }

    /**
     * <p>Specifies whether a form entry is required.</p>
     */
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }

    /**
     * <p>Specifies whether a form entry is required.</p>
     */
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }

    /**
     * <p>Specifies whether a form entry is required.</p>
     */
    inline FormEntryInput& WithRequired(bool value) { SetRequired(value); return *this;}


    /**
     * <p>The type ID of the form entry.</p>
     */
    inline const Aws::String& GetTypeIdentifier() const{ return m_typeIdentifier; }

    /**
     * <p>The type ID of the form entry.</p>
     */
    inline bool TypeIdentifierHasBeenSet() const { return m_typeIdentifierHasBeenSet; }

    /**
     * <p>The type ID of the form entry.</p>
     */
    inline void SetTypeIdentifier(const Aws::String& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = value; }

    /**
     * <p>The type ID of the form entry.</p>
     */
    inline void SetTypeIdentifier(Aws::String&& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = std::move(value); }

    /**
     * <p>The type ID of the form entry.</p>
     */
    inline void SetTypeIdentifier(const char* value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier.assign(value); }

    /**
     * <p>The type ID of the form entry.</p>
     */
    inline FormEntryInput& WithTypeIdentifier(const Aws::String& value) { SetTypeIdentifier(value); return *this;}

    /**
     * <p>The type ID of the form entry.</p>
     */
    inline FormEntryInput& WithTypeIdentifier(Aws::String&& value) { SetTypeIdentifier(std::move(value)); return *this;}

    /**
     * <p>The type ID of the form entry.</p>
     */
    inline FormEntryInput& WithTypeIdentifier(const char* value) { SetTypeIdentifier(value); return *this;}


    /**
     * <p>The type revision of the form entry.</p>
     */
    inline const Aws::String& GetTypeRevision() const{ return m_typeRevision; }

    /**
     * <p>The type revision of the form entry.</p>
     */
    inline bool TypeRevisionHasBeenSet() const { return m_typeRevisionHasBeenSet; }

    /**
     * <p>The type revision of the form entry.</p>
     */
    inline void SetTypeRevision(const Aws::String& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = value; }

    /**
     * <p>The type revision of the form entry.</p>
     */
    inline void SetTypeRevision(Aws::String&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::move(value); }

    /**
     * <p>The type revision of the form entry.</p>
     */
    inline void SetTypeRevision(const char* value) { m_typeRevisionHasBeenSet = true; m_typeRevision.assign(value); }

    /**
     * <p>The type revision of the form entry.</p>
     */
    inline FormEntryInput& WithTypeRevision(const Aws::String& value) { SetTypeRevision(value); return *this;}

    /**
     * <p>The type revision of the form entry.</p>
     */
    inline FormEntryInput& WithTypeRevision(Aws::String&& value) { SetTypeRevision(std::move(value)); return *this;}

    /**
     * <p>The type revision of the form entry.</p>
     */
    inline FormEntryInput& WithTypeRevision(const char* value) { SetTypeRevision(value); return *this;}

  private:

    bool m_required;
    bool m_requiredHasBeenSet = false;

    Aws::String m_typeIdentifier;
    bool m_typeIdentifierHasBeenSet = false;

    Aws::String m_typeRevision;
    bool m_typeRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
