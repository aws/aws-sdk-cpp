/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/EksPodProperties.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that contains the properties for the Kubernetes resources of a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksProperties">AWS
   * API Reference</a></p>
   */
  class EksProperties
  {
  public:
    AWS_BATCH_API EksProperties();
    AWS_BATCH_API EksProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The properties for the Kubernetes pod resources of a job.</p>
     */
    inline const EksPodProperties& GetPodProperties() const{ return m_podProperties; }

    /**
     * <p>The properties for the Kubernetes pod resources of a job.</p>
     */
    inline bool PodPropertiesHasBeenSet() const { return m_podPropertiesHasBeenSet; }

    /**
     * <p>The properties for the Kubernetes pod resources of a job.</p>
     */
    inline void SetPodProperties(const EksPodProperties& value) { m_podPropertiesHasBeenSet = true; m_podProperties = value; }

    /**
     * <p>The properties for the Kubernetes pod resources of a job.</p>
     */
    inline void SetPodProperties(EksPodProperties&& value) { m_podPropertiesHasBeenSet = true; m_podProperties = std::move(value); }

    /**
     * <p>The properties for the Kubernetes pod resources of a job.</p>
     */
    inline EksProperties& WithPodProperties(const EksPodProperties& value) { SetPodProperties(value); return *this;}

    /**
     * <p>The properties for the Kubernetes pod resources of a job.</p>
     */
    inline EksProperties& WithPodProperties(EksPodProperties&& value) { SetPodProperties(std::move(value)); return *this;}

  private:

    EksPodProperties m_podProperties;
    bool m_podPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
