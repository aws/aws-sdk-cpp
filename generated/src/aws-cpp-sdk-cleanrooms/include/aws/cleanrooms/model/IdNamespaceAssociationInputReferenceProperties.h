/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IdNamespaceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Document.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Provides the information for the ID namespace association input reference
   * properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IdNamespaceAssociationInputReferenceProperties">AWS
   * API Reference</a></p>
   */
  class IdNamespaceAssociationInputReferenceProperties
  {
  public:
    AWS_CLEANROOMS_API IdNamespaceAssociationInputReferenceProperties();
    AWS_CLEANROOMS_API IdNamespaceAssociationInputReferenceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API IdNamespaceAssociationInputReferenceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID namespace type for this ID namespace association.</p>
     */
    inline const IdNamespaceType& GetIdNamespaceType() const{ return m_idNamespaceType; }
    inline bool IdNamespaceTypeHasBeenSet() const { return m_idNamespaceTypeHasBeenSet; }
    inline void SetIdNamespaceType(const IdNamespaceType& value) { m_idNamespaceTypeHasBeenSet = true; m_idNamespaceType = value; }
    inline void SetIdNamespaceType(IdNamespaceType&& value) { m_idNamespaceTypeHasBeenSet = true; m_idNamespaceType = std::move(value); }
    inline IdNamespaceAssociationInputReferenceProperties& WithIdNamespaceType(const IdNamespaceType& value) { SetIdNamespaceType(value); return *this;}
    inline IdNamespaceAssociationInputReferenceProperties& WithIdNamespaceType(IdNamespaceType&& value) { SetIdNamespaceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how ID mapping workflows are supported for this ID namespace
     * association.</p>
     */
    inline const Aws::Vector<Aws::Utils::Document>& GetIdMappingWorkflowsSupported() const{ return m_idMappingWorkflowsSupported; }
    inline bool IdMappingWorkflowsSupportedHasBeenSet() const { return m_idMappingWorkflowsSupportedHasBeenSet; }
    inline void SetIdMappingWorkflowsSupported(const Aws::Vector<Aws::Utils::Document>& value) { m_idMappingWorkflowsSupportedHasBeenSet = true; m_idMappingWorkflowsSupported = value; }
    inline void SetIdMappingWorkflowsSupported(Aws::Vector<Aws::Utils::Document>&& value) { m_idMappingWorkflowsSupportedHasBeenSet = true; m_idMappingWorkflowsSupported = std::move(value); }
    inline IdNamespaceAssociationInputReferenceProperties& WithIdMappingWorkflowsSupported(const Aws::Vector<Aws::Utils::Document>& value) { SetIdMappingWorkflowsSupported(value); return *this;}
    inline IdNamespaceAssociationInputReferenceProperties& WithIdMappingWorkflowsSupported(Aws::Vector<Aws::Utils::Document>&& value) { SetIdMappingWorkflowsSupported(std::move(value)); return *this;}
    inline IdNamespaceAssociationInputReferenceProperties& AddIdMappingWorkflowsSupported(const Aws::Utils::Document& value) { m_idMappingWorkflowsSupportedHasBeenSet = true; m_idMappingWorkflowsSupported.push_back(value); return *this; }
    inline IdNamespaceAssociationInputReferenceProperties& AddIdMappingWorkflowsSupported(Aws::Utils::Document&& value) { m_idMappingWorkflowsSupportedHasBeenSet = true; m_idMappingWorkflowsSupported.push_back(std::move(value)); return *this; }
    ///@}
  private:

    IdNamespaceType m_idNamespaceType;
    bool m_idNamespaceTypeHasBeenSet = false;

    Aws::Vector<Aws::Utils::Document> m_idMappingWorkflowsSupported;
    bool m_idMappingWorkflowsSupportedHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
