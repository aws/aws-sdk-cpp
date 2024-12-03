/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The hyper pod properties of a Amazon Web Services Glue properties
   * patch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/HyperPodPropertiesInput">AWS
   * API Reference</a></p>
   */
  class HyperPodPropertiesInput
  {
  public:
    AWS_DATAZONE_API HyperPodPropertiesInput();
    AWS_DATAZONE_API HyperPodPropertiesInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API HyperPodPropertiesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cluster name the hyper pod properties.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline HyperPodPropertiesInput& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline HyperPodPropertiesInput& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline HyperPodPropertiesInput& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
