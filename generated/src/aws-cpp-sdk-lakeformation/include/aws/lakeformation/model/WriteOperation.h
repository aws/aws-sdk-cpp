/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/AddObjectInput.h>
#include <aws/lakeformation/model/DeleteObjectInput.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>Defines an object to add to or delete from a governed table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/WriteOperation">AWS
   * API Reference</a></p>
   */
  class WriteOperation
  {
  public:
    AWS_LAKEFORMATION_API WriteOperation() = default;
    AWS_LAKEFORMATION_API WriteOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API WriteOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A new object to add to the governed table.</p>
     */
    inline const AddObjectInput& GetAddObject() const { return m_addObject; }
    inline bool AddObjectHasBeenSet() const { return m_addObjectHasBeenSet; }
    template<typename AddObjectT = AddObjectInput>
    void SetAddObject(AddObjectT&& value) { m_addObjectHasBeenSet = true; m_addObject = std::forward<AddObjectT>(value); }
    template<typename AddObjectT = AddObjectInput>
    WriteOperation& WithAddObject(AddObjectT&& value) { SetAddObject(std::forward<AddObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object to delete from the governed table.</p>
     */
    inline const DeleteObjectInput& GetDeleteObject() const { return m_deleteObject; }
    inline bool DeleteObjectHasBeenSet() const { return m_deleteObjectHasBeenSet; }
    template<typename DeleteObjectT = DeleteObjectInput>
    void SetDeleteObject(DeleteObjectT&& value) { m_deleteObjectHasBeenSet = true; m_deleteObject = std::forward<DeleteObjectT>(value); }
    template<typename DeleteObjectT = DeleteObjectInput>
    WriteOperation& WithDeleteObject(DeleteObjectT&& value) { SetDeleteObject(std::forward<DeleteObjectT>(value)); return *this;}
    ///@}
  private:

    AddObjectInput m_addObject;
    bool m_addObjectHasBeenSet = false;

    DeleteObjectInput m_deleteObject;
    bool m_deleteObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
