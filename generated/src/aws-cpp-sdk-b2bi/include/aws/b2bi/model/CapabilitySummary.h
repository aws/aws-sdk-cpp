/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/CapabilityType.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Returns the capability summary details. A trading capability contains the
   * information required to transform incoming EDI documents into JSON or XML
   * outputs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/CapabilitySummary">AWS
   * API Reference</a></p>
   */
  class CapabilitySummary
  {
  public:
    AWS_B2BI_API CapabilitySummary();
    AWS_B2BI_API CapabilitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API CapabilitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline const Aws::String& GetCapabilityId() const{ return m_capabilityId; }

    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline bool CapabilityIdHasBeenSet() const { return m_capabilityIdHasBeenSet; }

    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline void SetCapabilityId(const Aws::String& value) { m_capabilityIdHasBeenSet = true; m_capabilityId = value; }

    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline void SetCapabilityId(Aws::String&& value) { m_capabilityIdHasBeenSet = true; m_capabilityId = std::move(value); }

    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline void SetCapabilityId(const char* value) { m_capabilityIdHasBeenSet = true; m_capabilityId.assign(value); }

    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline CapabilitySummary& WithCapabilityId(const Aws::String& value) { SetCapabilityId(value); return *this;}

    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline CapabilitySummary& WithCapabilityId(Aws::String&& value) { SetCapabilityId(std::move(value)); return *this;}

    /**
     * <p>Returns a system-assigned unique identifier for the capability.</p>
     */
    inline CapabilitySummary& WithCapabilityId(const char* value) { SetCapabilityId(value); return *this;}


    /**
     * <p>The display name of the capability.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name of the capability.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The display name of the capability.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The display name of the capability.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The display name of the capability.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The display name of the capability.</p>
     */
    inline CapabilitySummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name of the capability.</p>
     */
    inline CapabilitySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name of the capability.</p>
     */
    inline CapabilitySummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline const CapabilityType& GetType() const{ return m_type; }

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline void SetType(const CapabilityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline void SetType(CapabilityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline CapabilitySummary& WithType(const CapabilityType& value) { SetType(value); return *this;}

    /**
     * <p>Returns the type of the capability. Currently, only <code>edi</code> is
     * supported.</p>
     */
    inline CapabilitySummary& WithType(CapabilityType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Returns a timestamp for creation date and time of the capability.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Returns a timestamp for creation date and time of the capability.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Returns a timestamp for creation date and time of the capability.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Returns a timestamp for creation date and time of the capability.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Returns a timestamp for creation date and time of the capability.</p>
     */
    inline CapabilitySummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Returns a timestamp for creation date and time of the capability.</p>
     */
    inline CapabilitySummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * capability was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * capability was modified.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * capability was modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * capability was modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * capability was modified.</p>
     */
    inline CapabilitySummary& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>Returns a timestamp that identifies the most recent date and time that the
     * capability was modified.</p>
     */
    inline CapabilitySummary& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}

  private:

    Aws::String m_capabilityId;
    bool m_capabilityIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CapabilityType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
