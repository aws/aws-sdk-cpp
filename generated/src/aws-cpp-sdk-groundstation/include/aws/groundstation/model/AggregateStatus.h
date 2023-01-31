/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/groundstation/model/AgentStatus.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Aggregate status of Agent components.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AggregateStatus">AWS
   * API Reference</a></p>
   */
  class AggregateStatus
  {
  public:
    AWS_GROUNDSTATION_API AggregateStatus();
    AWS_GROUNDSTATION_API AggregateStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API AggregateStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sparse map of failure signatures.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetSignatureMap() const{ return m_signatureMap; }

    /**
     * <p>Sparse map of failure signatures.</p>
     */
    inline bool SignatureMapHasBeenSet() const { return m_signatureMapHasBeenSet; }

    /**
     * <p>Sparse map of failure signatures.</p>
     */
    inline void SetSignatureMap(const Aws::Map<Aws::String, bool>& value) { m_signatureMapHasBeenSet = true; m_signatureMap = value; }

    /**
     * <p>Sparse map of failure signatures.</p>
     */
    inline void SetSignatureMap(Aws::Map<Aws::String, bool>&& value) { m_signatureMapHasBeenSet = true; m_signatureMap = std::move(value); }

    /**
     * <p>Sparse map of failure signatures.</p>
     */
    inline AggregateStatus& WithSignatureMap(const Aws::Map<Aws::String, bool>& value) { SetSignatureMap(value); return *this;}

    /**
     * <p>Sparse map of failure signatures.</p>
     */
    inline AggregateStatus& WithSignatureMap(Aws::Map<Aws::String, bool>&& value) { SetSignatureMap(std::move(value)); return *this;}

    /**
     * <p>Sparse map of failure signatures.</p>
     */
    inline AggregateStatus& AddSignatureMap(const Aws::String& key, bool value) { m_signatureMapHasBeenSet = true; m_signatureMap.emplace(key, value); return *this; }

    /**
     * <p>Sparse map of failure signatures.</p>
     */
    inline AggregateStatus& AddSignatureMap(Aws::String&& key, bool value) { m_signatureMapHasBeenSet = true; m_signatureMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Sparse map of failure signatures.</p>
     */
    inline AggregateStatus& AddSignatureMap(const char* key, bool value) { m_signatureMapHasBeenSet = true; m_signatureMap.emplace(key, value); return *this; }


    /**
     * <p>Aggregate status.</p>
     */
    inline const AgentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Aggregate status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Aggregate status.</p>
     */
    inline void SetStatus(const AgentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Aggregate status.</p>
     */
    inline void SetStatus(AgentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Aggregate status.</p>
     */
    inline AggregateStatus& WithStatus(const AgentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Aggregate status.</p>
     */
    inline AggregateStatus& WithStatus(AgentStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, bool> m_signatureMap;
    bool m_signatureMapHasBeenSet = false;

    AgentStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
