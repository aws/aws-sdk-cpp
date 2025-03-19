/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/PrincipalType.h>
#include <aws/kendra/model/ReadAccessType.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides user and group information for <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">user
   * context filtering</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Principal">AWS
   * API Reference</a></p>
   */
  class Principal
  {
  public:
    AWS_KENDRA_API Principal() = default;
    AWS_KENDRA_API Principal(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Principal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the user or group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Principal& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of principal.</p>
     */
    inline PrincipalType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PrincipalType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Principal& WithType(PrincipalType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to allow or deny document access to the principal.</p>
     */
    inline ReadAccessType GetAccess() const { return m_access; }
    inline bool AccessHasBeenSet() const { return m_accessHasBeenSet; }
    inline void SetAccess(ReadAccessType value) { m_accessHasBeenSet = true; m_access = value; }
    inline Principal& WithAccess(ReadAccessType value) { SetAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source the principal should access documents
     * from.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    Principal& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PrincipalType m_type{PrincipalType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ReadAccessType m_access{ReadAccessType::NOT_SET};
    bool m_accessHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
