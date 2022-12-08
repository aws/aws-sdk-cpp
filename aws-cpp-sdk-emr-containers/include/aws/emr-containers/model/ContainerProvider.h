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


    /**
     * <p>The type of the container provider. EKS is the only supported type as of
     * now.</p>
     */
    inline const ContainerProviderType& GetType() const{ return m_type; }

    /**
     * <p>The type of the container provider. EKS is the only supported type as of
     * now.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the container provider. EKS is the only supported type as of
     * now.</p>
     */
    inline void SetType(const ContainerProviderType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the container provider. EKS is the only supported type as of
     * now.</p>
     */
    inline void SetType(ContainerProviderType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the container provider. EKS is the only supported type as of
     * now.</p>
     */
    inline ContainerProvider& WithType(const ContainerProviderType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the container provider. EKS is the only supported type as of
     * now.</p>
     */
    inline ContainerProvider& WithType(ContainerProviderType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ID of the container cluster.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the container cluster.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the container cluster.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the container cluster.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the container cluster.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the container cluster.</p>
     */
    inline ContainerProvider& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the container cluster.</p>
     */
    inline ContainerProvider& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the container cluster.</p>
     */
    inline ContainerProvider& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The information about the container cluster.</p>
     */
    inline const ContainerInfo& GetInfo() const{ return m_info; }

    /**
     * <p>The information about the container cluster.</p>
     */
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }

    /**
     * <p>The information about the container cluster.</p>
     */
    inline void SetInfo(const ContainerInfo& value) { m_infoHasBeenSet = true; m_info = value; }

    /**
     * <p>The information about the container cluster.</p>
     */
    inline void SetInfo(ContainerInfo&& value) { m_infoHasBeenSet = true; m_info = std::move(value); }

    /**
     * <p>The information about the container cluster.</p>
     */
    inline ContainerProvider& WithInfo(const ContainerInfo& value) { SetInfo(value); return *this;}

    /**
     * <p>The information about the container cluster.</p>
     */
    inline ContainerProvider& WithInfo(ContainerInfo&& value) { SetInfo(std::move(value)); return *this;}

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
