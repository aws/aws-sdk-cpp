/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Contains the application runtime IDs and their supported DPU
   * sizes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ApplicationDPUSizes">AWS
   * API Reference</a></p>
   */
  class ApplicationDPUSizes
  {
  public:
    AWS_ATHENA_API ApplicationDPUSizes() = default;
    AWS_ATHENA_API ApplicationDPUSizes(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ApplicationDPUSizes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the supported application runtime (for example, <code>Athena
     * notebook version 1</code>).</p>
     */
    inline const Aws::String& GetApplicationRuntimeId() const { return m_applicationRuntimeId; }
    inline bool ApplicationRuntimeIdHasBeenSet() const { return m_applicationRuntimeIdHasBeenSet; }
    template<typename ApplicationRuntimeIdT = Aws::String>
    void SetApplicationRuntimeId(ApplicationRuntimeIdT&& value) { m_applicationRuntimeIdHasBeenSet = true; m_applicationRuntimeId = std::forward<ApplicationRuntimeIdT>(value); }
    template<typename ApplicationRuntimeIdT = Aws::String>
    ApplicationDPUSizes& WithApplicationRuntimeId(ApplicationRuntimeIdT&& value) { SetApplicationRuntimeId(std::forward<ApplicationRuntimeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the supported DPU sizes that the application runtime supports.</p>
     */
    inline const Aws::Vector<int>& GetSupportedDPUSizes() const { return m_supportedDPUSizes; }
    inline bool SupportedDPUSizesHasBeenSet() const { return m_supportedDPUSizesHasBeenSet; }
    template<typename SupportedDPUSizesT = Aws::Vector<int>>
    void SetSupportedDPUSizes(SupportedDPUSizesT&& value) { m_supportedDPUSizesHasBeenSet = true; m_supportedDPUSizes = std::forward<SupportedDPUSizesT>(value); }
    template<typename SupportedDPUSizesT = Aws::Vector<int>>
    ApplicationDPUSizes& WithSupportedDPUSizes(SupportedDPUSizesT&& value) { SetSupportedDPUSizes(std::forward<SupportedDPUSizesT>(value)); return *this;}
    inline ApplicationDPUSizes& AddSupportedDPUSizes(int value) { m_supportedDPUSizesHasBeenSet = true; m_supportedDPUSizes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_applicationRuntimeId;
    bool m_applicationRuntimeIdHasBeenSet = false;

    Aws::Vector<int> m_supportedDPUSizes;
    bool m_supportedDPUSizesHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
