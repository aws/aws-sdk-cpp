/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Parameter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the result of a successful invocation of the
   * <code>DescribeEngineDefaultParameters</code> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/EngineDefaults">AWS
   * API Reference</a></p>
   */
  class EngineDefaults
  {
  public:
    AWS_RDS_API EngineDefaults();
    AWS_RDS_API EngineDefaults(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API EngineDefaults& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies the name of the DB parameter group family that the engine default
     * parameters apply to.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }

    /**
     * <p>Specifies the name of the DB parameter group family that the engine default
     * parameters apply to.</p>
     */
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }

    /**
     * <p>Specifies the name of the DB parameter group family that the engine default
     * parameters apply to.</p>
     */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>Specifies the name of the DB parameter group family that the engine default
     * parameters apply to.</p>
     */
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }

    /**
     * <p>Specifies the name of the DB parameter group family that the engine default
     * parameters apply to.</p>
     */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }

    /**
     * <p>Specifies the name of the DB parameter group family that the engine default
     * parameters apply to.</p>
     */
    inline EngineDefaults& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>Specifies the name of the DB parameter group family that the engine default
     * parameters apply to.</p>
     */
    inline EngineDefaults& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the DB parameter group family that the engine default
     * parameters apply to.</p>
     */
    inline EngineDefaults& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous EngineDefaults request.
     * If this parameter is specified, the response includes only records beyond the
     * marker, up to the value specified by <code>MaxRecords</code> .</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous EngineDefaults request.
     * If this parameter is specified, the response includes only records beyond the
     * marker, up to the value specified by <code>MaxRecords</code> .</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous EngineDefaults request.
     * If this parameter is specified, the response includes only records beyond the
     * marker, up to the value specified by <code>MaxRecords</code> .</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous EngineDefaults request.
     * If this parameter is specified, the response includes only records beyond the
     * marker, up to the value specified by <code>MaxRecords</code> .</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous EngineDefaults request.
     * If this parameter is specified, the response includes only records beyond the
     * marker, up to the value specified by <code>MaxRecords</code> .</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous EngineDefaults request.
     * If this parameter is specified, the response includes only records beyond the
     * marker, up to the value specified by <code>MaxRecords</code> .</p>
     */
    inline EngineDefaults& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous EngineDefaults request.
     * If this parameter is specified, the response includes only records beyond the
     * marker, up to the value specified by <code>MaxRecords</code> .</p>
     */
    inline EngineDefaults& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous EngineDefaults request.
     * If this parameter is specified, the response includes only records beyond the
     * marker, up to the value specified by <code>MaxRecords</code> .</p>
     */
    inline EngineDefaults& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline EngineDefaults& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline EngineDefaults& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline EngineDefaults& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>Contains a list of engine default parameters.</p>
     */
    inline EngineDefaults& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
