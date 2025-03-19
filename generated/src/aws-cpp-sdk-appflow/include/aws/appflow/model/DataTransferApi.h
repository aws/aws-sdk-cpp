/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/DataTransferApiType.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>The API of the connector application that Amazon AppFlow uses to transfer
   * your data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DataTransferApi">AWS
   * API Reference</a></p>
   */
  class DataTransferApi
  {
  public:
    AWS_APPFLOW_API DataTransferApi() = default;
    AWS_APPFLOW_API DataTransferApi(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API DataTransferApi& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the connector application API.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataTransferApi& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can specify one of the following types:</p> <dl> <dt>AUTOMATIC</dt> <dd>
     * <p>The default. Optimizes a flow for datasets that fluctuate in size from small
     * to large. For each flow run, Amazon AppFlow chooses to use the SYNC or ASYNC API
     * type based on the amount of data that the run transfers.</p> </dd> <dt>SYNC</dt>
     * <dd> <p>A synchronous API. This type of API optimizes a flow for small to
     * medium-sized datasets.</p> </dd> <dt>ASYNC</dt> <dd> <p>An asynchronous API.
     * This type of API optimizes a flow for large datasets.</p> </dd> </dl>
     */
    inline DataTransferApiType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataTransferApiType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DataTransferApi& WithType(DataTransferApiType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataTransferApiType m_type{DataTransferApiType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
