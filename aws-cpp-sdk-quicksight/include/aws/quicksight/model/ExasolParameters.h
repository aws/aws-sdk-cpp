/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The required parameters for connecting to an Exasol data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ExasolParameters">AWS
   * API Reference</a></p>
   */
  class ExasolParameters
  {
  public:
    AWS_QUICKSIGHT_API ExasolParameters();
    AWS_QUICKSIGHT_API ExasolParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ExasolParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The hostname or IP address of the Exasol data source.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>The hostname or IP address of the Exasol data source.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>The hostname or IP address of the Exasol data source.</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>The hostname or IP address of the Exasol data source.</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>The hostname or IP address of the Exasol data source.</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>The hostname or IP address of the Exasol data source.</p>
     */
    inline ExasolParameters& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>The hostname or IP address of the Exasol data source.</p>
     */
    inline ExasolParameters& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>The hostname or IP address of the Exasol data source.</p>
     */
    inline ExasolParameters& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>The port for the Exasol data source.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port for the Exasol data source.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port for the Exasol data source.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port for the Exasol data source.</p>
     */
    inline ExasolParameters& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
