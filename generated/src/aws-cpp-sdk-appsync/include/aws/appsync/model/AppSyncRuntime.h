/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/RuntimeName.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a runtime used by an Amazon Web Services AppSync pipeline resolver
   * or Amazon Web Services AppSync function. Specifies the name and version of the
   * runtime to use. Note that if a runtime is specified, code must also be
   * specified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/AppSyncRuntime">AWS
   * API Reference</a></p>
   */
  class AppSyncRuntime
  {
  public:
    AWS_APPSYNC_API AppSyncRuntime() = default;
    AWS_APPSYNC_API AppSyncRuntime(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API AppSyncRuntime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>name</code> of the runtime to use. Currently, the only allowed
     * value is <code>APPSYNC_JS</code>.</p>
     */
    inline RuntimeName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(RuntimeName value) { m_nameHasBeenSet = true; m_name = value; }
    inline AppSyncRuntime& WithName(RuntimeName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>version</code> of the runtime to use. Currently, the only allowed
     * version is <code>1.0.0</code>.</p>
     */
    inline const Aws::String& GetRuntimeVersion() const { return m_runtimeVersion; }
    inline bool RuntimeVersionHasBeenSet() const { return m_runtimeVersionHasBeenSet; }
    template<typename RuntimeVersionT = Aws::String>
    void SetRuntimeVersion(RuntimeVersionT&& value) { m_runtimeVersionHasBeenSet = true; m_runtimeVersion = std::forward<RuntimeVersionT>(value); }
    template<typename RuntimeVersionT = Aws::String>
    AppSyncRuntime& WithRuntimeVersion(RuntimeVersionT&& value) { SetRuntimeVersion(std::forward<RuntimeVersionT>(value)); return *this;}
    ///@}
  private:

    RuntimeName m_name{RuntimeName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_runtimeVersion;
    bool m_runtimeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
