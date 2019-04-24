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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains settings for a traffic policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/TrafficPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API TrafficPolicy
  {
  public:
    TrafficPolicy();
    TrafficPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    TrafficPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The ID that Amazon Route 53 assigned to a traffic policy when you created
     * it.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID that Amazon Route 53 assigned to a traffic policy when you created
     * it.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID that Amazon Route 53 assigned to a traffic policy when you created
     * it.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID that Amazon Route 53 assigned to a traffic policy when you created
     * it.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID that Amazon Route 53 assigned to a traffic policy when you created
     * it.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID that Amazon Route 53 assigned to a traffic policy when you created
     * it.</p>
     */
    inline TrafficPolicy& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID that Amazon Route 53 assigned to a traffic policy when you created
     * it.</p>
     */
    inline TrafficPolicy& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID that Amazon Route 53 assigned to a traffic policy when you created
     * it.</p>
     */
    inline TrafficPolicy& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The version number that Amazon Route 53 assigns to a traffic policy. For a
     * new traffic policy, the value of <code>Version</code> is always 1.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version number that Amazon Route 53 assigns to a traffic policy. For a
     * new traffic policy, the value of <code>Version</code> is always 1.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number that Amazon Route 53 assigns to a traffic policy. For a
     * new traffic policy, the value of <code>Version</code> is always 1.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number that Amazon Route 53 assigns to a traffic policy. For a
     * new traffic policy, the value of <code>Version</code> is always 1.</p>
     */
    inline TrafficPolicy& WithVersion(int value) { SetVersion(value); return *this;}


    /**
     * <p>The name that you specified when you created the traffic policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you specified when you created the traffic policy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that you specified when you created the traffic policy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that you specified when you created the traffic policy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that you specified when you created the traffic policy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that you specified when you created the traffic policy.</p>
     */
    inline TrafficPolicy& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you specified when you created the traffic policy.</p>
     */
    inline TrafficPolicy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you specified when you created the traffic policy.</p>
     */
    inline TrafficPolicy& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline const RRType& GetType() const{ return m_type; }

    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline void SetType(const RRType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline void SetType(RRType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline TrafficPolicy& WithType(const RRType& value) { SetType(value); return *this;}

    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline TrafficPolicy& WithType(RRType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The definition of a traffic policy in JSON format. You specify the JSON
     * document to use for a new traffic policy in the <code>CreateTrafficPolicy</code>
     * request. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }

    /**
     * <p>The definition of a traffic policy in JSON format. You specify the JSON
     * document to use for a new traffic policy in the <code>CreateTrafficPolicy</code>
     * request. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    /**
     * <p>The definition of a traffic policy in JSON format. You specify the JSON
     * document to use for a new traffic policy in the <code>CreateTrafficPolicy</code>
     * request. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>The definition of a traffic policy in JSON format. You specify the JSON
     * document to use for a new traffic policy in the <code>CreateTrafficPolicy</code>
     * request. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>The definition of a traffic policy in JSON format. You specify the JSON
     * document to use for a new traffic policy in the <code>CreateTrafficPolicy</code>
     * request. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }

    /**
     * <p>The definition of a traffic policy in JSON format. You specify the JSON
     * document to use for a new traffic policy in the <code>CreateTrafficPolicy</code>
     * request. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline TrafficPolicy& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    /**
     * <p>The definition of a traffic policy in JSON format. You specify the JSON
     * document to use for a new traffic policy in the <code>CreateTrafficPolicy</code>
     * request. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline TrafficPolicy& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}

    /**
     * <p>The definition of a traffic policy in JSON format. You specify the JSON
     * document to use for a new traffic policy in the <code>CreateTrafficPolicy</code>
     * request. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline TrafficPolicy& WithDocument(const char* value) { SetDocument(value); return *this;}


    /**
     * <p>The comment that you specify in the <code>CreateTrafficPolicy</code> request,
     * if any.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>The comment that you specify in the <code>CreateTrafficPolicy</code> request,
     * if any.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>The comment that you specify in the <code>CreateTrafficPolicy</code> request,
     * if any.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>The comment that you specify in the <code>CreateTrafficPolicy</code> request,
     * if any.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>The comment that you specify in the <code>CreateTrafficPolicy</code> request,
     * if any.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>The comment that you specify in the <code>CreateTrafficPolicy</code> request,
     * if any.</p>
     */
    inline TrafficPolicy& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>The comment that you specify in the <code>CreateTrafficPolicy</code> request,
     * if any.</p>
     */
    inline TrafficPolicy& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>The comment that you specify in the <code>CreateTrafficPolicy</code> request,
     * if any.</p>
     */
    inline TrafficPolicy& WithComment(const char* value) { SetComment(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    int m_version;
    bool m_versionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    RRType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_document;
    bool m_documentHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
