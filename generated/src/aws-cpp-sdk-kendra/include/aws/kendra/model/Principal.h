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
    AWS_KENDRA_API Principal();
    AWS_KENDRA_API Principal(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Principal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the user or group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Principal& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Principal& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Principal& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of principal.</p>
     */
    inline const PrincipalType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PrincipalType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PrincipalType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Principal& WithType(const PrincipalType& value) { SetType(value); return *this;}
    inline Principal& WithType(PrincipalType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to allow or deny document access to the principal.</p>
     */
    inline const ReadAccessType& GetAccess() const{ return m_access; }
    inline bool AccessHasBeenSet() const { return m_accessHasBeenSet; }
    inline void SetAccess(const ReadAccessType& value) { m_accessHasBeenSet = true; m_access = value; }
    inline void SetAccess(ReadAccessType&& value) { m_accessHasBeenSet = true; m_access = std::move(value); }
    inline Principal& WithAccess(const ReadAccessType& value) { SetAccess(value); return *this;}
    inline Principal& WithAccess(ReadAccessType&& value) { SetAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source the principal should access documents
     * from.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }
    inline Principal& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}
    inline Principal& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}
    inline Principal& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PrincipalType m_type;
    bool m_typeHasBeenSet = false;

    ReadAccessType m_access;
    bool m_accessHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
