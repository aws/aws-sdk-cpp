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
    AWS_EMRCONTAINERS_API ContainerProvider();
    AWS_EMRCONTAINERS_API ContainerProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API ContainerProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the container provider. Amazon EKS is the only supported type as
     * of now.</p>
     */
    inline const ContainerProviderType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ContainerProviderType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ContainerProviderType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ContainerProvider& WithType(const ContainerProviderType& value) { SetType(value); return *this;}
    inline ContainerProvider& WithType(ContainerProviderType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the container cluster.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ContainerProvider& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ContainerProvider& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ContainerProvider& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information about the container cluster.</p>
     */
    inline const ContainerInfo& GetInfo() const{ return m_info; }
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }
    inline void SetInfo(const ContainerInfo& value) { m_infoHasBeenSet = true; m_info = value; }
    inline void SetInfo(ContainerInfo&& value) { m_infoHasBeenSet = true; m_info = std::move(value); }
    inline ContainerProvider& WithInfo(const ContainerInfo& value) { SetInfo(value); return *this;}
    inline ContainerProvider& WithInfo(ContainerInfo&& value) { SetInfo(std::move(value)); return *this;}
    ///@}
  private:

    ContainerProviderType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ContainerInfo m_info;
    bool m_infoHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
