/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/ClientSideTimestampsStatus.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>The client-side timestamp setting of the table.</p> <p>For more information,
   * see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/client-side-timestamps-how-it-works.html">How
   * it works: Amazon Keyspaces client-side timestamps</a> in the <i>Amazon Keyspaces
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/ClientSideTimestamps">AWS
   * API Reference</a></p>
   */
  class ClientSideTimestamps
  {
  public:
    AWS_KEYSPACES_API ClientSideTimestamps();
    AWS_KEYSPACES_API ClientSideTimestamps(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API ClientSideTimestamps& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Shows how to enable client-side timestamps settings for the specified
     * table.</p>
     */
    inline const ClientSideTimestampsStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Shows how to enable client-side timestamps settings for the specified
     * table.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Shows how to enable client-side timestamps settings for the specified
     * table.</p>
     */
    inline void SetStatus(const ClientSideTimestampsStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Shows how to enable client-side timestamps settings for the specified
     * table.</p>
     */
    inline void SetStatus(ClientSideTimestampsStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Shows how to enable client-side timestamps settings for the specified
     * table.</p>
     */
    inline ClientSideTimestamps& WithStatus(const ClientSideTimestampsStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Shows how to enable client-side timestamps settings for the specified
     * table.</p>
     */
    inline ClientSideTimestamps& WithStatus(ClientSideTimestampsStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ClientSideTimestampsStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
