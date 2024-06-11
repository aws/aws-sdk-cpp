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
    AWS_IOTWIRELESS_API SemtechGnssDetail();
    AWS_IOTWIRELESS_API SemtechGnssDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SemtechGnssDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The vendor of the solver object.</p>
     */
    inline const PositionSolverProvider& GetProvider() const{ return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(const PositionSolverProvider& value) { m_providerHasBeenSet = true; m_provider = value; }
    inline void SetProvider(PositionSolverProvider&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }
    inline SemtechGnssDetail& WithProvider(const PositionSolverProvider& value) { SetProvider(value); return *this;}
    inline SemtechGnssDetail& WithProvider(PositionSolverProvider&& value) { SetProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of positioning solver used.</p>
     */
    inline const PositionSolverType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PositionSolverType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PositionSolverType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SemtechGnssDetail& WithType(const PositionSolverType& value) { SetType(value); return *this;}
    inline SemtechGnssDetail& WithType(PositionSolverType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status indicating whether the solver is enabled.</p>
     */
    inline const PositionConfigurationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PositionConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PositionConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SemtechGnssDetail& WithStatus(const PositionConfigurationStatus& value) { SetStatus(value); return *this;}
    inline SemtechGnssDetail& WithStatus(PositionConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether forward error correction is enabled.</p>
     */
    inline const PositionConfigurationFec& GetFec() const{ return m_fec; }
    inline bool FecHasBeenSet() const { return m_fecHasBeenSet; }
    inline void SetFec(const PositionConfigurationFec& value) { m_fecHasBeenSet = true; m_fec = value; }
    inline void SetFec(PositionConfigurationFec&& value) { m_fecHasBeenSet = true; m_fec = std::move(value); }
    inline SemtechGnssDetail& WithFec(const PositionConfigurationFec& value) { SetFec(value); return *this;}
    inline SemtechGnssDetail& WithFec(PositionConfigurationFec&& value) { SetFec(std::move(value)); return *this;}
    ///@}
  private:

    PositionSolverProvider m_provider;
    bool m_providerHasBeenSet = false;

    PositionSolverType m_type;
    bool m_typeHasBeenSet = false;

    PositionConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    PositionConfigurationFec m_fec;
    bool m_fecHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
