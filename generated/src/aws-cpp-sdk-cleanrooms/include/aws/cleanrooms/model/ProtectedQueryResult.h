/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedQueryOutput.h>
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
   * <p>Details about the query results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryResult">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryResult
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryResult();
    AWS_CLEANROOMS_API ProtectedQueryResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The output of the protected query.</p>
     */
    inline const ProtectedQueryOutput& GetOutput() const{ return m_output; }

    /**
     * <p>The output of the protected query.</p>
     */
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }

    /**
     * <p>The output of the protected query.</p>
     */
    inline void SetOutput(const ProtectedQueryOutput& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>The output of the protected query.</p>
     */
    inline void SetOutput(ProtectedQueryOutput&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p>The output of the protected query.</p>
     */
    inline ProtectedQueryResult& WithOutput(const ProtectedQueryOutput& value) { SetOutput(value); return *this;}

    /**
     * <p>The output of the protected query.</p>
     */
    inline ProtectedQueryResult& WithOutput(ProtectedQueryOutput&& value) { SetOutput(std::move(value)); return *this;}

  private:

    ProtectedQueryOutput m_output;
    bool m_outputHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
