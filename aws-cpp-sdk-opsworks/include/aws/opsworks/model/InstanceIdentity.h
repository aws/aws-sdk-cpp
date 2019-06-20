/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Contains a description of an Amazon EC2 instance from the Amazon EC2 metadata
   * service. For more information, see <a
   * href="https://docs.aws.amazon.com/sdkfornet/latest/apidocs/Index.html">Instance
   * Metadata and User Data</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/InstanceIdentity">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API InstanceIdentity
  {
  public:
    InstanceIdentity();
    InstanceIdentity(Aws::Utils::Json::JsonView jsonValue);
    InstanceIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A JSON document that contains the metadata.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }

    /**
     * <p>A JSON document that contains the metadata.</p>
     */
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    /**
     * <p>A JSON document that contains the metadata.</p>
     */
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>A JSON document that contains the metadata.</p>
     */
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>A JSON document that contains the metadata.</p>
     */
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }

    /**
     * <p>A JSON document that contains the metadata.</p>
     */
    inline InstanceIdentity& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    /**
     * <p>A JSON document that contains the metadata.</p>
     */
    inline InstanceIdentity& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}

    /**
     * <p>A JSON document that contains the metadata.</p>
     */
    inline InstanceIdentity& WithDocument(const char* value) { SetDocument(value); return *this;}


    /**
     * <p>A signature that can be used to verify the document's accuracy and
     * authenticity.</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }

    /**
     * <p>A signature that can be used to verify the document's accuracy and
     * authenticity.</p>
     */
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }

    /**
     * <p>A signature that can be used to verify the document's accuracy and
     * authenticity.</p>
     */
    inline void SetSignature(const Aws::String& value) { m_signatureHasBeenSet = true; m_signature = value; }

    /**
     * <p>A signature that can be used to verify the document's accuracy and
     * authenticity.</p>
     */
    inline void SetSignature(Aws::String&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }

    /**
     * <p>A signature that can be used to verify the document's accuracy and
     * authenticity.</p>
     */
    inline void SetSignature(const char* value) { m_signatureHasBeenSet = true; m_signature.assign(value); }

    /**
     * <p>A signature that can be used to verify the document's accuracy and
     * authenticity.</p>
     */
    inline InstanceIdentity& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    /**
     * <p>A signature that can be used to verify the document's accuracy and
     * authenticity.</p>
     */
    inline InstanceIdentity& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    /**
     * <p>A signature that can be used to verify the document's accuracy and
     * authenticity.</p>
     */
    inline InstanceIdentity& WithSignature(const char* value) { SetSignature(value); return *this;}

  private:

    Aws::String m_document;
    bool m_documentHasBeenSet;

    Aws::String m_signature;
    bool m_signatureHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
