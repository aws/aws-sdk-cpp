/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ImportDataType.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The import data format contains the specifications of the input file that
   * would be passed to the address list import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ImportDataFormat">AWS
   * API Reference</a></p>
   */
  class ImportDataFormat
  {
  public:
    AWS_MAILMANAGER_API ImportDataFormat() = default;
    AWS_MAILMANAGER_API ImportDataFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ImportDataFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of file that would be passed as an input for the address list import
     * job.</p>
     */
    inline ImportDataType GetImportDataType() const { return m_importDataType; }
    inline bool ImportDataTypeHasBeenSet() const { return m_importDataTypeHasBeenSet; }
    inline void SetImportDataType(ImportDataType value) { m_importDataTypeHasBeenSet = true; m_importDataType = value; }
    inline ImportDataFormat& WithImportDataType(ImportDataType value) { SetImportDataType(value); return *this;}
    ///@}
  private:

    ImportDataType m_importDataType{ImportDataType::NOT_SET};
    bool m_importDataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
