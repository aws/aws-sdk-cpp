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
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/FormEntryOutput">AWS
   * API Reference</a></p>
   */
  class FormEntryOutput
  {
  public:
    AWS_DATAZONE_API FormEntryOutput() = default;
    AWS_DATAZONE_API FormEntryOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API FormEntryOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether a form entry is required.</p>
     */
    inline bool GetRequired() const { return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline FormEntryOutput& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the type of the form entry.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    FormEntryOutput& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type revision of the form entry.</p>
     */
    inline const Aws::String& GetTypeRevision() const { return m_typeRevision; }
    inline bool TypeRevisionHasBeenSet() const { return m_typeRevisionHasBeenSet; }
    template<typename TypeRevisionT = Aws::String>
    void SetTypeRevision(TypeRevisionT&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::forward<TypeRevisionT>(value); }
    template<typename TypeRevisionT = Aws::String>
    FormEntryOutput& WithTypeRevision(TypeRevisionT&& value) { SetTypeRevision(std::forward<TypeRevisionT>(value)); return *this;}
    ///@}
  private:

    bool m_required{false};
    bool m_requiredHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_typeRevision;
    bool m_typeRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
