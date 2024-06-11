﻿/**
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
    AWS_DEVOPSGURU_API AnomalySourceMetadata();
    AWS_DEVOPSGURU_API AnomalySourceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API AnomalySourceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source of the anomaly.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline AnomalySourceMetadata& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline AnomalySourceMetadata& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline AnomalySourceMetadata& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the anomaly's resource.</p>
     */
    inline const Aws::String& GetSourceResourceName() const{ return m_sourceResourceName; }
    inline bool SourceResourceNameHasBeenSet() const { return m_sourceResourceNameHasBeenSet; }
    inline void SetSourceResourceName(const Aws::String& value) { m_sourceResourceNameHasBeenSet = true; m_sourceResourceName = value; }
    inline void SetSourceResourceName(Aws::String&& value) { m_sourceResourceNameHasBeenSet = true; m_sourceResourceName = std::move(value); }
    inline void SetSourceResourceName(const char* value) { m_sourceResourceNameHasBeenSet = true; m_sourceResourceName.assign(value); }
    inline AnomalySourceMetadata& WithSourceResourceName(const Aws::String& value) { SetSourceResourceName(value); return *this;}
    inline AnomalySourceMetadata& WithSourceResourceName(Aws::String&& value) { SetSourceResourceName(std::move(value)); return *this;}
    inline AnomalySourceMetadata& WithSourceResourceName(const char* value) { SetSourceResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The anomaly's resource type.</p>
     */
    inline const Aws::String& GetSourceResourceType() const{ return m_sourceResourceType; }
    inline bool SourceResourceTypeHasBeenSet() const { return m_sourceResourceTypeHasBeenSet; }
    inline void SetSourceResourceType(const Aws::String& value) { m_sourceResourceTypeHasBeenSet = true; m_sourceResourceType = value; }
    inline void SetSourceResourceType(Aws::String&& value) { m_sourceResourceTypeHasBeenSet = true; m_sourceResourceType = std::move(value); }
    inline void SetSourceResourceType(const char* value) { m_sourceResourceTypeHasBeenSet = true; m_sourceResourceType.assign(value); }
    inline AnomalySourceMetadata& WithSourceResourceType(const Aws::String& value) { SetSourceResourceType(value); return *this;}
    inline AnomalySourceMetadata& WithSourceResourceType(Aws::String&& value) { SetSourceResourceType(std::move(value)); return *this;}
    inline AnomalySourceMetadata& WithSourceResourceType(const char* value) { SetSourceResourceType(value); return *this;}
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
