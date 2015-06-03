/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /*
    <p> </p>
  */
  class AWS_REDSHIFT_API DescribeLoggingStatusRequest : public RedshiftRequest
  {
  public:
    DescribeLoggingStatusRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The identifier of the cluster to get the logging status from. </p> <p>Example: <code>examplecluster</code></p>
    */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    /*
     <p> The identifier of the cluster to get the logging status from. </p> <p>Example: <code>examplecluster</code></p>
    */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifier = value; }

    /*
     <p> The identifier of the cluster to get the logging status from. </p> <p>Example: <code>examplecluster</code></p>
    */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifier.assign(value); }

    /*
     <p> The identifier of the cluster to get the logging status from. </p> <p>Example: <code>examplecluster</code></p>
    */
    inline DescribeLoggingStatusRequest&  WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /*
     <p> The identifier of the cluster to get the logging status from. </p> <p>Example: <code>examplecluster</code></p>
    */
    inline DescribeLoggingStatusRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

  private:
    Aws::String m_clusterIdentifier;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
