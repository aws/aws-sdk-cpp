/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedJobOutput.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Details about the job results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobResult">AWS
   * API Reference</a></p>
   */
  class ProtectedJobResult
  {
  public:
    AWS_CLEANROOMS_API ProtectedJobResult();
    AWS_CLEANROOMS_API ProtectedJobResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The output of the protected job.</p>
     */
    inline const ProtectedJobOutput& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const ProtectedJobOutput& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(ProtectedJobOutput&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline ProtectedJobResult& WithOutput(const ProtectedJobOutput& value) { SetOutput(value); return *this;}
    inline ProtectedJobResult& WithOutput(ProtectedJobOutput&& value) { SetOutput(std::move(value)); return *this;}
    ///@}
  private:

    ProtectedJobOutput m_output;
    bool m_outputHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
