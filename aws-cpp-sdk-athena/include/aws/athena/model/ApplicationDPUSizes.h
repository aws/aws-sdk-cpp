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
    AWS_ATHENA_API ApplicationDPUSizes();
    AWS_ATHENA_API ApplicationDPUSizes(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ApplicationDPUSizes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the supported application runtime (for example, <code>Jupyter
     * 1.0</code>).</p>
     */
    inline const Aws::String& GetApplicationRuntimeId() const{ return m_applicationRuntimeId; }

    /**
     * <p>The name of the supported application runtime (for example, <code>Jupyter
     * 1.0</code>).</p>
     */
    inline bool ApplicationRuntimeIdHasBeenSet() const { return m_applicationRuntimeIdHasBeenSet; }

    /**
     * <p>The name of the supported application runtime (for example, <code>Jupyter
     * 1.0</code>).</p>
     */
    inline void SetApplicationRuntimeId(const Aws::String& value) { m_applicationRuntimeIdHasBeenSet = true; m_applicationRuntimeId = value; }

    /**
     * <p>The name of the supported application runtime (for example, <code>Jupyter
     * 1.0</code>).</p>
     */
    inline void SetApplicationRuntimeId(Aws::String&& value) { m_applicationRuntimeIdHasBeenSet = true; m_applicationRuntimeId = std::move(value); }

    /**
     * <p>The name of the supported application runtime (for example, <code>Jupyter
     * 1.0</code>).</p>
     */
    inline void SetApplicationRuntimeId(const char* value) { m_applicationRuntimeIdHasBeenSet = true; m_applicationRuntimeId.assign(value); }

    /**
     * <p>The name of the supported application runtime (for example, <code>Jupyter
     * 1.0</code>).</p>
     */
    inline ApplicationDPUSizes& WithApplicationRuntimeId(const Aws::String& value) { SetApplicationRuntimeId(value); return *this;}

    /**
     * <p>The name of the supported application runtime (for example, <code>Jupyter
     * 1.0</code>).</p>
     */
    inline ApplicationDPUSizes& WithApplicationRuntimeId(Aws::String&& value) { SetApplicationRuntimeId(std::move(value)); return *this;}

    /**
     * <p>The name of the supported application runtime (for example, <code>Jupyter
     * 1.0</code>).</p>
     */
    inline ApplicationDPUSizes& WithApplicationRuntimeId(const char* value) { SetApplicationRuntimeId(value); return *this;}


    /**
     * <p>A list of the supported DPU sizes that the application runtime supports.</p>
     */
    inline const Aws::Vector<int>& GetSupportedDPUSizes() const{ return m_supportedDPUSizes; }

    /**
     * <p>A list of the supported DPU sizes that the application runtime supports.</p>
     */
    inline bool SupportedDPUSizesHasBeenSet() const { return m_supportedDPUSizesHasBeenSet; }

    /**
     * <p>A list of the supported DPU sizes that the application runtime supports.</p>
     */
    inline void SetSupportedDPUSizes(const Aws::Vector<int>& value) { m_supportedDPUSizesHasBeenSet = true; m_supportedDPUSizes = value; }

    /**
     * <p>A list of the supported DPU sizes that the application runtime supports.</p>
     */
    inline void SetSupportedDPUSizes(Aws::Vector<int>&& value) { m_supportedDPUSizesHasBeenSet = true; m_supportedDPUSizes = std::move(value); }

    /**
     * <p>A list of the supported DPU sizes that the application runtime supports.</p>
     */
    inline ApplicationDPUSizes& WithSupportedDPUSizes(const Aws::Vector<int>& value) { SetSupportedDPUSizes(value); return *this;}

    /**
     * <p>A list of the supported DPU sizes that the application runtime supports.</p>
     */
    inline ApplicationDPUSizes& WithSupportedDPUSizes(Aws::Vector<int>&& value) { SetSupportedDPUSizes(std::move(value)); return *this;}

    /**
     * <p>A list of the supported DPU sizes that the application runtime supports.</p>
     */
    inline ApplicationDPUSizes& AddSupportedDPUSizes(int value) { m_supportedDPUSizesHasBeenSet = true; m_supportedDPUSizes.push_back(value); return *this; }

  private:

    Aws::String m_applicationRuntimeId;
    bool m_applicationRuntimeIdHasBeenSet = false;

    Aws::Vector<int> m_supportedDPUSizes;
    bool m_supportedDPUSizesHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
