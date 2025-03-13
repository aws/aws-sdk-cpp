/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/ContainerProviderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/ContainerInfo.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>The information about the container provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ContainerProvider">AWS
   * API Reference</a></p>
   */
  class ContainerProvider
  {
  public:
    AWS_EMRCONTAINERS_API ContainerProvider() = default;
    AWS_EMRCONTAINERS_API ContainerProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API ContainerProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the container provider. Amazon EKS is the only supported type as
     * of now.</p>
     */
    inline ContainerProviderType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ContainerProviderType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ContainerProvider& WithType(ContainerProviderType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the container cluster.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ContainerProvider& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information about the container cluster.</p>
     */
    inline const ContainerInfo& GetInfo() const { return m_info; }
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }
    template<typename InfoT = ContainerInfo>
    void SetInfo(InfoT&& value) { m_infoHasBeenSet = true; m_info = std::forward<InfoT>(value); }
    template<typename InfoT = ContainerInfo>
    ContainerProvider& WithInfo(InfoT&& value) { SetInfo(std::forward<InfoT>(value)); return *this;}
    ///@}
  private:

    ContainerProviderType m_type{ContainerProviderType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ContainerInfo m_info;
    bool m_infoHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
