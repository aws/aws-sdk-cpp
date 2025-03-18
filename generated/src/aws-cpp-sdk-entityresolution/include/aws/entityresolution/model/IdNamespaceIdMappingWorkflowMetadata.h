/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/IdMappingType.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>The settings for the ID namespace for the ID mapping workflow
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdNamespaceIdMappingWorkflowMetadata">AWS
   * API Reference</a></p>
   */
  class IdNamespaceIdMappingWorkflowMetadata
  {
  public:
    AWS_ENTITYRESOLUTION_API IdNamespaceIdMappingWorkflowMetadata() = default;
    AWS_ENTITYRESOLUTION_API IdNamespaceIdMappingWorkflowMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdNamespaceIdMappingWorkflowMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of ID mapping.</p>
     */
    inline IdMappingType GetIdMappingType() const { return m_idMappingType; }
    inline bool IdMappingTypeHasBeenSet() const { return m_idMappingTypeHasBeenSet; }
    inline void SetIdMappingType(IdMappingType value) { m_idMappingTypeHasBeenSet = true; m_idMappingType = value; }
    inline IdNamespaceIdMappingWorkflowMetadata& WithIdMappingType(IdMappingType value) { SetIdMappingType(value); return *this;}
    ///@}
  private:

    IdMappingType m_idMappingType{IdMappingType::NOT_SET};
    bool m_idMappingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
