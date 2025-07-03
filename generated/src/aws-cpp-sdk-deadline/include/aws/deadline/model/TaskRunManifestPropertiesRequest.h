/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The output manifest properties reported by the worker agent for a completed
   * task run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/TaskRunManifestPropertiesRequest">AWS
   * API Reference</a></p>
   */
  class TaskRunManifestPropertiesRequest
  {
  public:
    AWS_DEADLINE_API TaskRunManifestPropertiesRequest() = default;
    AWS_DEADLINE_API TaskRunManifestPropertiesRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API TaskRunManifestPropertiesRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The manifest file path.</p>
     */
    inline const Aws::String& GetOutputManifestPath() const { return m_outputManifestPath; }
    inline bool OutputManifestPathHasBeenSet() const { return m_outputManifestPathHasBeenSet; }
    template<typename OutputManifestPathT = Aws::String>
    void SetOutputManifestPath(OutputManifestPathT&& value) { m_outputManifestPathHasBeenSet = true; m_outputManifestPath = std::forward<OutputManifestPathT>(value); }
    template<typename OutputManifestPathT = Aws::String>
    TaskRunManifestPropertiesRequest& WithOutputManifestPath(OutputManifestPathT&& value) { SetOutputManifestPath(std::forward<OutputManifestPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash value of the file.</p>
     */
    inline const Aws::String& GetOutputManifestHash() const { return m_outputManifestHash; }
    inline bool OutputManifestHashHasBeenSet() const { return m_outputManifestHashHasBeenSet; }
    template<typename OutputManifestHashT = Aws::String>
    void SetOutputManifestHash(OutputManifestHashT&& value) { m_outputManifestHashHasBeenSet = true; m_outputManifestHash = std::forward<OutputManifestHashT>(value); }
    template<typename OutputManifestHashT = Aws::String>
    TaskRunManifestPropertiesRequest& WithOutputManifestHash(OutputManifestHashT&& value) { SetOutputManifestHash(std::forward<OutputManifestHashT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputManifestPath;
    bool m_outputManifestPathHasBeenSet = false;

    Aws::String m_outputManifestHash;
    bool m_outputManifestHashHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
