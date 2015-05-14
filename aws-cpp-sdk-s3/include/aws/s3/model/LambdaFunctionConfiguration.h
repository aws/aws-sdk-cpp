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
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/Event.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  /*
    Container for specifying the AWS Lambda notification configuration.
  */
  class AWS_S3_API LambdaFunctionConfiguration
  {
  public:
    LambdaFunctionConfiguration();
    LambdaFunctionConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    LambdaFunctionConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    
    inline const Aws::String& GetId() const{ return m_id; }
    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline LambdaFunctionConfiguration&  WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline LambdaFunctionConfiguration& WithId(const char* value) { SetId(value); return *this;}

    /*
     Lambda cloud function ARN that Amazon S3 can invoke when it detects events of the specified type.
    */
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }
    /*
     Lambda cloud function ARN that Amazon S3 can invoke when it detects events of the specified type.
    */
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArn = value; }

    /*
     Lambda cloud function ARN that Amazon S3 can invoke when it detects events of the specified type.
    */
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArn.assign(value); }

    /*
     Lambda cloud function ARN that Amazon S3 can invoke when it detects events of the specified type.
    */
    inline LambdaFunctionConfiguration&  WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}

    /*
     Lambda cloud function ARN that Amazon S3 can invoke when it detects events of the specified type.
    */
    inline LambdaFunctionConfiguration& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}

    
    inline const Aws::Vector<Event>& GetEvents() const{ return m_events; }
    
    inline void SetEvents(const Aws::Vector<Event>& value) { m_events = value; }

    
    inline LambdaFunctionConfiguration&  WithEvents(const Aws::Vector<Event>& value) { SetEvents(value); return *this;}

    
    inline LambdaFunctionConfiguration& AddEvents(const Event& value) { m_events.push_back(value); return *this; }

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_lambdaFunctionArn;
    Aws::Vector<Event> m_events;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
