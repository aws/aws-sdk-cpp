/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Parameter.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes the default cluster parameters for a parameter group
   * family.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DefaultClusterParameters">AWS
   * API Reference</a></p>
   */
  class DefaultClusterParameters
  {
  public:
    AWS_REDSHIFT_API DefaultClusterParameters();
    AWS_REDSHIFT_API DefaultClusterParameters(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API DefaultClusterParameters& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the cluster parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline const Aws::String& GetParameterGroupFamily() const{ return m_parameterGroupFamily; }

    /**
     * <p>The name of the cluster parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline bool ParameterGroupFamilyHasBeenSet() const { return m_parameterGroupFamilyHasBeenSet; }

    /**
     * <p>The name of the cluster parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline void SetParameterGroupFamily(const Aws::String& value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily = value; }

    /**
     * <p>The name of the cluster parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline void SetParameterGroupFamily(Aws::String&& value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily = std::move(value); }

    /**
     * <p>The name of the cluster parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline void SetParameterGroupFamily(const char* value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily.assign(value); }

    /**
     * <p>The name of the cluster parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline DefaultClusterParameters& WithParameterGroupFamily(const Aws::String& value) { SetParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of the cluster parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline DefaultClusterParameters& WithParameterGroupFamily(Aws::String&& value) { SetParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster parameter group family to which the engine default
     * parameters apply.</p>
     */
    inline DefaultClusterParameters& WithParameterGroupFamily(const char* value) { SetParameterGroupFamily(value); return *this;}


    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DefaultClusterParameters& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DefaultClusterParameters& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DefaultClusterParameters& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The list of cluster default parameters.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The list of cluster default parameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The list of cluster default parameters.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The list of cluster default parameters.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The list of cluster default parameters.</p>
     */
    inline DefaultClusterParameters& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The list of cluster default parameters.</p>
     */
    inline DefaultClusterParameters& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The list of cluster default parameters.</p>
     */
    inline DefaultClusterParameters& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>The list of cluster default parameters.</p>
     */
    inline DefaultClusterParameters& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_parameterGroupFamily;
    bool m_parameterGroupFamilyHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
