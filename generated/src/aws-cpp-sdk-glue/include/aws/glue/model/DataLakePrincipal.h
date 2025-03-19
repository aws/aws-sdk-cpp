/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The Lake Formation principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataLakePrincipal">AWS
   * API Reference</a></p>
   */
  class DataLakePrincipal
  {
  public:
    AWS_GLUE_API DataLakePrincipal() = default;
    AWS_GLUE_API DataLakePrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataLakePrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier for the Lake Formation principal.</p>
     */
    inline const Aws::String& GetDataLakePrincipalIdentifier() const { return m_dataLakePrincipalIdentifier; }
    inline bool DataLakePrincipalIdentifierHasBeenSet() const { return m_dataLakePrincipalIdentifierHasBeenSet; }
    template<typename DataLakePrincipalIdentifierT = Aws::String>
    void SetDataLakePrincipalIdentifier(DataLakePrincipalIdentifierT&& value) { m_dataLakePrincipalIdentifierHasBeenSet = true; m_dataLakePrincipalIdentifier = std::forward<DataLakePrincipalIdentifierT>(value); }
    template<typename DataLakePrincipalIdentifierT = Aws::String>
    DataLakePrincipal& WithDataLakePrincipalIdentifier(DataLakePrincipalIdentifierT&& value) { SetDataLakePrincipalIdentifier(std::forward<DataLakePrincipalIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataLakePrincipalIdentifier;
    bool m_dataLakePrincipalIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
