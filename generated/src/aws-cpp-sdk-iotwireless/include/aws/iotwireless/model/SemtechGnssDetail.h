/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/PositionSolverProvider.h>
#include <aws/iotwireless/model/PositionSolverType.h>
#include <aws/iotwireless/model/PositionConfigurationStatus.h>
#include <aws/iotwireless/model/PositionConfigurationFec.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Details of the Semtech GNSS solver object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SemtechGnssDetail">AWS
   * API Reference</a></p>
   */
  class SemtechGnssDetail
  {
  public:
    AWS_IOTWIRELESS_API SemtechGnssDetail() = default;
    AWS_IOTWIRELESS_API SemtechGnssDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SemtechGnssDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The vendor of the solver object.</p>
     */
    inline PositionSolverProvider GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(PositionSolverProvider value) { m_providerHasBeenSet = true; m_provider = value; }
    inline SemtechGnssDetail& WithProvider(PositionSolverProvider value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of positioning solver used.</p>
     */
    inline PositionSolverType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PositionSolverType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SemtechGnssDetail& WithType(PositionSolverType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status indicating whether the solver is enabled.</p>
     */
    inline PositionConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PositionConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SemtechGnssDetail& WithStatus(PositionConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether forward error correction is enabled.</p>
     */
    inline PositionConfigurationFec GetFec() const { return m_fec; }
    inline bool FecHasBeenSet() const { return m_fecHasBeenSet; }
    inline void SetFec(PositionConfigurationFec value) { m_fecHasBeenSet = true; m_fec = value; }
    inline SemtechGnssDetail& WithFec(PositionConfigurationFec value) { SetFec(value); return *this;}
    ///@}
  private:

    PositionSolverProvider m_provider{PositionSolverProvider::NOT_SET};
    bool m_providerHasBeenSet = false;

    PositionSolverType m_type{PositionSolverType::NOT_SET};
    bool m_typeHasBeenSet = false;

    PositionConfigurationStatus m_status{PositionConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    PositionConfigurationFec m_fec{PositionConfigurationFec::NOT_SET};
    bool m_fecHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
