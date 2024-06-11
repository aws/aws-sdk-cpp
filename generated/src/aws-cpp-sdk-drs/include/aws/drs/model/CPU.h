/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Information about a server's CPU.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/CPU">AWS API
   * Reference</a></p>
   */
  class CPU
  {
  public:
    AWS_DRS_API CPU();
    AWS_DRS_API CPU(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API CPU& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of CPU cores.</p>
     */
    inline long long GetCores() const{ return m_cores; }
    inline bool CoresHasBeenSet() const { return m_coresHasBeenSet; }
    inline void SetCores(long long value) { m_coresHasBeenSet = true; m_cores = value; }
    inline CPU& WithCores(long long value) { SetCores(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model name of the CPU.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline CPU& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline CPU& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline CPU& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}
  private:

    long long m_cores;
    bool m_coresHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
