/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/EksInfo.h>
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
   * <p>The information about the container used for a job run or a managed
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/ContainerInfo">AWS
   * API Reference</a></p>
   */
  class ContainerInfo
  {
  public:
    AWS_EMRCONTAINERS_API ContainerInfo();
    AWS_EMRCONTAINERS_API ContainerInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API ContainerInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The information about the EKS cluster.</p>
     */
    inline const EksInfo& GetEksInfo() const{ return m_eksInfo; }

    /**
     * <p>The information about the EKS cluster.</p>
     */
    inline bool EksInfoHasBeenSet() const { return m_eksInfoHasBeenSet; }

    /**
     * <p>The information about the EKS cluster.</p>
     */
    inline void SetEksInfo(const EksInfo& value) { m_eksInfoHasBeenSet = true; m_eksInfo = value; }

    /**
     * <p>The information about the EKS cluster.</p>
     */
    inline void SetEksInfo(EksInfo&& value) { m_eksInfoHasBeenSet = true; m_eksInfo = std::move(value); }

    /**
     * <p>The information about the EKS cluster.</p>
     */
    inline ContainerInfo& WithEksInfo(const EksInfo& value) { SetEksInfo(value); return *this;}

    /**
     * <p>The information about the EKS cluster.</p>
     */
    inline ContainerInfo& WithEksInfo(EksInfo&& value) { SetEksInfo(std::move(value)); return *this;}

  private:

    EksInfo m_eksInfo;
    bool m_eksInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
