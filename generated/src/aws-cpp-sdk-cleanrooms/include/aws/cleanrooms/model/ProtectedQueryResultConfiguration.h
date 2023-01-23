/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedQueryOutputConfiguration.h>
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
   * <p>Contains configurations for protected query results.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryResultConfiguration">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryResultConfiguration
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryResultConfiguration();
    AWS_CLEANROOMS_API ProtectedQueryResultConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryResultConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration for protected query results.</p>
     */
    inline const ProtectedQueryOutputConfiguration& GetOutputConfiguration() const{ return m_outputConfiguration; }

    /**
     * <p>Configuration for protected query results.</p>
     */
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }

    /**
     * <p>Configuration for protected query results.</p>
     */
    inline void SetOutputConfiguration(const ProtectedQueryOutputConfiguration& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = value; }

    /**
     * <p>Configuration for protected query results.</p>
     */
    inline void SetOutputConfiguration(ProtectedQueryOutputConfiguration&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::move(value); }

    /**
     * <p>Configuration for protected query results.</p>
     */
    inline ProtectedQueryResultConfiguration& WithOutputConfiguration(const ProtectedQueryOutputConfiguration& value) { SetOutputConfiguration(value); return *this;}

    /**
     * <p>Configuration for protected query results.</p>
     */
    inline ProtectedQueryResultConfiguration& WithOutputConfiguration(ProtectedQueryOutputConfiguration&& value) { SetOutputConfiguration(std::move(value)); return *this;}

  private:

    ProtectedQueryOutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
