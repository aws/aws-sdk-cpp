/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>Metadata about the detection source that generates proactive anomalies. The
   * anomaly is detected using analysis of the metric data&#x2028; over a period of
   * time</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AnomalySourceMetadata">AWS
   * API Reference</a></p>
   */
  class AnomalySourceMetadata
  {
  public:
    AWS_DEVOPSGURU_API AnomalySourceMetadata() = default;
    AWS_DEVOPSGURU_API AnomalySourceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API AnomalySourceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source of the anomaly.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    AnomalySourceMetadata& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the anomaly's resource.</p>
     */
    inline const Aws::String& GetSourceResourceName() const { return m_sourceResourceName; }
    inline bool SourceResourceNameHasBeenSet() const { return m_sourceResourceNameHasBeenSet; }
    template<typename SourceResourceNameT = Aws::String>
    void SetSourceResourceName(SourceResourceNameT&& value) { m_sourceResourceNameHasBeenSet = true; m_sourceResourceName = std::forward<SourceResourceNameT>(value); }
    template<typename SourceResourceNameT = Aws::String>
    AnomalySourceMetadata& WithSourceResourceName(SourceResourceNameT&& value) { SetSourceResourceName(std::forward<SourceResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The anomaly's resource type.</p>
     */
    inline const Aws::String& GetSourceResourceType() const { return m_sourceResourceType; }
    inline bool SourceResourceTypeHasBeenSet() const { return m_sourceResourceTypeHasBeenSet; }
    template<typename SourceResourceTypeT = Aws::String>
    void SetSourceResourceType(SourceResourceTypeT&& value) { m_sourceResourceTypeHasBeenSet = true; m_sourceResourceType = std::forward<SourceResourceTypeT>(value); }
    template<typename SourceResourceTypeT = Aws::String>
    AnomalySourceMetadata& WithSourceResourceType(SourceResourceTypeT&& value) { SetSourceResourceType(std::forward<SourceResourceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_sourceResourceName;
    bool m_sourceResourceNameHasBeenSet = false;

    Aws::String m_sourceResourceType;
    bool m_sourceResourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
