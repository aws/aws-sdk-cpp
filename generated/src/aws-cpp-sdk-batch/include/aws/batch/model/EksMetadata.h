/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Describes and uniquely identifies Kubernetes resources. For example, the
   * compute environment that a pod runs in or the <code>jobID</code> for a job
   * running in the pod. For more information, see <a
   * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/kubernetes-objects/">Understanding
   * Kubernetes Objects</a> in the <i>Kubernetes documentation</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksMetadata">AWS
   * API Reference</a></p>
   */
  class EksMetadata
  {
  public:
    AWS_BATCH_API EksMetadata();
    AWS_BATCH_API EksMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline void SetLabels(const Aws::Map<Aws::String, Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline void SetLabels(Aws::Map<Aws::String, Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline EksMetadata& WithLabels(const Aws::Map<Aws::String, Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline EksMetadata& WithLabels(Aws::Map<Aws::String, Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline EksMetadata& AddLabels(const Aws::String& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }

    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline EksMetadata& AddLabels(Aws::String&& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline EksMetadata& AddLabels(const Aws::String& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline EksMetadata& AddLabels(Aws::String&& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline EksMetadata& AddLabels(const char* key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline EksMetadata& AddLabels(Aws::String&& key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs used to identify, sort, and organize cube resources. Can
     * contain up to 63 uppercase letters, lowercase letters, numbers, hyphens (-), and
     * underscores (_). Labels can be added or modified at any time. Each resource can
     * have multiple labels, but each key must be unique for a given object.</p>
     */
    inline EksMetadata& AddLabels(const char* key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
