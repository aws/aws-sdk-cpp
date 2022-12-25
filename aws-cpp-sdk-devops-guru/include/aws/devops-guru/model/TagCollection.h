/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>A collection of Amazon Web Services tags.</p> <p>Tags help you identify and
   * organize your Amazon Web Services resources. Many Amazon Web Services services
   * support tagging, so you can assign the same tag to resources from different
   * services to indicate that the resources are related. For example, you can assign
   * the same tag to an Amazon DynamoDB table resource that you assign to an Lambda
   * function. For more information about using tags, see the <a
   * href="https://d1.awsstatic.com/whitepapers/aws-tagging-best-practices.pdf">Tagging
   * best practices</a> whitepaper. </p> <p>Each Amazon Web Services tag has two
   * parts. </p> <ul> <li> <p>A tag <i>key</i> (for example, <code>CostCenter</code>,
   * <code>Environment</code>, <code>Project</code>, or <code>Secret</code>). Tag
   * <i>keys</i> are case-sensitive.</p> </li> <li> <p>An optional field known as a
   * tag <i>value</i> (for example, <code>111122223333</code>,
   * <code>Production</code>, or a team name). Omitting the tag <i>value</i> is the
   * same as using an empty string. Like tag <i>keys</i>, tag <i>values</i> are
   * case-sensitive.</p> </li> </ul> <p>Together these are known as
   * <i>key</i>-<i>value</i> pairs.</p>  <p>The string used for a
   * <i>key</i> in a tag that you use to define your resource coverage must begin
   * with the prefix <code>Devops-guru-</code>. The tag <i>key</i> might be
   * <code>DevOps-Guru-deployment-application</code> or
   * <code>devops-guru-rds-application</code>. When you create a <i>key</i>, the case
   * of characters in the <i>key</i> can be whatever you choose. After you create a
   * <i>key</i>, it is case-sensitive. For example, DevOps Guru works with a
   * <i>key</i> named <code>devops-guru-rds</code> and a <i>key</i> named
   * <code>DevOps-Guru-RDS</code>, and these act as two different <i>keys</i>.
   * Possible <i>key</i>/<i>value</i> pairs in your application might be
   * <code>Devops-Guru-production-application/RDS</code> or
   * <code>Devops-Guru-production-application/containers</code>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/TagCollection">AWS
   * API Reference</a></p>
   */
  class TagCollection
  {
  public:
    AWS_DEVOPSGURU_API TagCollection();
    AWS_DEVOPSGURU_API TagCollection(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API TagCollection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon Web Services tag <i>key</i> that is used to identify the Amazon Web
     * Services resources that DevOps Guru analyzes. All Amazon Web Services resources
     * in your account and Region tagged with this <i>key</i> make up your DevOps Guru
     * application and analysis boundary.</p>  <p>The string used for a
     * <i>key</i> in a tag that you use to define your resource coverage must begin
     * with the prefix <code>Devops-guru-</code>. The tag <i>key</i> might be
     * <code>DevOps-Guru-deployment-application</code> or
     * <code>devops-guru-rds-application</code>. When you create a <i>key</i>, the case
     * of characters in the <i>key</i> can be whatever you choose. After you create a
     * <i>key</i>, it is case-sensitive. For example, DevOps Guru works with a
     * <i>key</i> named <code>devops-guru-rds</code> and a <i>key</i> named
     * <code>DevOps-Guru-RDS</code>, and these act as two different <i>keys</i>.
     * Possible <i>key</i>/<i>value</i> pairs in your application might be
     * <code>Devops-Guru-production-application/RDS</code> or
     * <code>Devops-Guru-production-application/containers</code>.</p> 
     */
    inline const Aws::String& GetAppBoundaryKey() const{ return m_appBoundaryKey; }

    /**
     * <p>An Amazon Web Services tag <i>key</i> that is used to identify the Amazon Web
     * Services resources that DevOps Guru analyzes. All Amazon Web Services resources
     * in your account and Region tagged with this <i>key</i> make up your DevOps Guru
     * application and analysis boundary.</p>  <p>The string used for a
     * <i>key</i> in a tag that you use to define your resource coverage must begin
     * with the prefix <code>Devops-guru-</code>. The tag <i>key</i> might be
     * <code>DevOps-Guru-deployment-application</code> or
     * <code>devops-guru-rds-application</code>. When you create a <i>key</i>, the case
     * of characters in the <i>key</i> can be whatever you choose. After you create a
     * <i>key</i>, it is case-sensitive. For example, DevOps Guru works with a
     * <i>key</i> named <code>devops-guru-rds</code> and a <i>key</i> named
     * <code>DevOps-Guru-RDS</code>, and these act as two different <i>keys</i>.
     * Possible <i>key</i>/<i>value</i> pairs in your application might be
     * <code>Devops-Guru-production-application/RDS</code> or
     * <code>Devops-Guru-production-application/containers</code>.</p> 
     */
    inline bool AppBoundaryKeyHasBeenSet() const { return m_appBoundaryKeyHasBeenSet; }

    /**
     * <p>An Amazon Web Services tag <i>key</i> that is used to identify the Amazon Web
     * Services resources that DevOps Guru analyzes. All Amazon Web Services resources
     * in your account and Region tagged with this <i>key</i> make up your DevOps Guru
     * application and analysis boundary.</p>  <p>The string used for a
     * <i>key</i> in a tag that you use to define your resource coverage must begin
     * with the prefix <code>Devops-guru-</code>. The tag <i>key</i> might be
     * <code>DevOps-Guru-deployment-application</code> or
     * <code>devops-guru-rds-application</code>. When you create a <i>key</i>, the case
     * of characters in the <i>key</i> can be whatever you choose. After you create a
     * <i>key</i>, it is case-sensitive. For example, DevOps Guru works with a
     * <i>key</i> named <code>devops-guru-rds</code> and a <i>key</i> named
     * <code>DevOps-Guru-RDS</code>, and these act as two different <i>keys</i>.
     * Possible <i>key</i>/<i>value</i> pairs in your application might be
     * <code>Devops-Guru-production-application/RDS</code> or
     * <code>Devops-Guru-production-application/containers</code>.</p> 
     */
    inline void SetAppBoundaryKey(const Aws::String& value) { m_appBoundaryKeyHasBeenSet = true; m_appBoundaryKey = value; }

    /**
     * <p>An Amazon Web Services tag <i>key</i> that is used to identify the Amazon Web
     * Services resources that DevOps Guru analyzes. All Amazon Web Services resources
     * in your account and Region tagged with this <i>key</i> make up your DevOps Guru
     * application and analysis boundary.</p>  <p>The string used for a
     * <i>key</i> in a tag that you use to define your resource coverage must begin
     * with the prefix <code>Devops-guru-</code>. The tag <i>key</i> might be
     * <code>DevOps-Guru-deployment-application</code> or
     * <code>devops-guru-rds-application</code>. When you create a <i>key</i>, the case
     * of characters in the <i>key</i> can be whatever you choose. After you create a
     * <i>key</i>, it is case-sensitive. For example, DevOps Guru works with a
     * <i>key</i> named <code>devops-guru-rds</code> and a <i>key</i> named
     * <code>DevOps-Guru-RDS</code>, and these act as two different <i>keys</i>.
     * Possible <i>key</i>/<i>value</i> pairs in your application might be
     * <code>Devops-Guru-production-application/RDS</code> or
     * <code>Devops-Guru-production-application/containers</code>.</p> 
     */
    inline void SetAppBoundaryKey(Aws::String&& value) { m_appBoundaryKeyHasBeenSet = true; m_appBoundaryKey = std::move(value); }

    /**
     * <p>An Amazon Web Services tag <i>key</i> that is used to identify the Amazon Web
     * Services resources that DevOps Guru analyzes. All Amazon Web Services resources
     * in your account and Region tagged with this <i>key</i> make up your DevOps Guru
     * application and analysis boundary.</p>  <p>The string used for a
     * <i>key</i> in a tag that you use to define your resource coverage must begin
     * with the prefix <code>Devops-guru-</code>. The tag <i>key</i> might be
     * <code>DevOps-Guru-deployment-application</code> or
     * <code>devops-guru-rds-application</code>. When you create a <i>key</i>, the case
     * of characters in the <i>key</i> can be whatever you choose. After you create a
     * <i>key</i>, it is case-sensitive. For example, DevOps Guru works with a
     * <i>key</i> named <code>devops-guru-rds</code> and a <i>key</i> named
     * <code>DevOps-Guru-RDS</code>, and these act as two different <i>keys</i>.
     * Possible <i>key</i>/<i>value</i> pairs in your application might be
     * <code>Devops-Guru-production-application/RDS</code> or
     * <code>Devops-Guru-production-application/containers</code>.</p> 
     */
    inline void SetAppBoundaryKey(const char* value) { m_appBoundaryKeyHasBeenSet = true; m_appBoundaryKey.assign(value); }

    /**
     * <p>An Amazon Web Services tag <i>key</i> that is used to identify the Amazon Web
     * Services resources that DevOps Guru analyzes. All Amazon Web Services resources
     * in your account and Region tagged with this <i>key</i> make up your DevOps Guru
     * application and analysis boundary.</p>  <p>The string used for a
     * <i>key</i> in a tag that you use to define your resource coverage must begin
     * with the prefix <code>Devops-guru-</code>. The tag <i>key</i> might be
     * <code>DevOps-Guru-deployment-application</code> or
     * <code>devops-guru-rds-application</code>. When you create a <i>key</i>, the case
     * of characters in the <i>key</i> can be whatever you choose. After you create a
     * <i>key</i>, it is case-sensitive. For example, DevOps Guru works with a
     * <i>key</i> named <code>devops-guru-rds</code> and a <i>key</i> named
     * <code>DevOps-Guru-RDS</code>, and these act as two different <i>keys</i>.
     * Possible <i>key</i>/<i>value</i> pairs in your application might be
     * <code>Devops-Guru-production-application/RDS</code> or
     * <code>Devops-Guru-production-application/containers</code>.</p> 
     */
    inline TagCollection& WithAppBoundaryKey(const Aws::String& value) { SetAppBoundaryKey(value); return *this;}

    /**
     * <p>An Amazon Web Services tag <i>key</i> that is used to identify the Amazon Web
     * Services resources that DevOps Guru analyzes. All Amazon Web Services resources
     * in your account and Region tagged with this <i>key</i> make up your DevOps Guru
     * application and analysis boundary.</p>  <p>The string used for a
     * <i>key</i> in a tag that you use to define your resource coverage must begin
     * with the prefix <code>Devops-guru-</code>. The tag <i>key</i> might be
     * <code>DevOps-Guru-deployment-application</code> or
     * <code>devops-guru-rds-application</code>. When you create a <i>key</i>, the case
     * of characters in the <i>key</i> can be whatever you choose. After you create a
     * <i>key</i>, it is case-sensitive. For example, DevOps Guru works with a
     * <i>key</i> named <code>devops-guru-rds</code> and a <i>key</i> named
     * <code>DevOps-Guru-RDS</code>, and these act as two different <i>keys</i>.
     * Possible <i>key</i>/<i>value</i> pairs in your application might be
     * <code>Devops-Guru-production-application/RDS</code> or
     * <code>Devops-Guru-production-application/containers</code>.</p> 
     */
    inline TagCollection& WithAppBoundaryKey(Aws::String&& value) { SetAppBoundaryKey(std::move(value)); return *this;}

    /**
     * <p>An Amazon Web Services tag <i>key</i> that is used to identify the Amazon Web
     * Services resources that DevOps Guru analyzes. All Amazon Web Services resources
     * in your account and Region tagged with this <i>key</i> make up your DevOps Guru
     * application and analysis boundary.</p>  <p>The string used for a
     * <i>key</i> in a tag that you use to define your resource coverage must begin
     * with the prefix <code>Devops-guru-</code>. The tag <i>key</i> might be
     * <code>DevOps-Guru-deployment-application</code> or
     * <code>devops-guru-rds-application</code>. When you create a <i>key</i>, the case
     * of characters in the <i>key</i> can be whatever you choose. After you create a
     * <i>key</i>, it is case-sensitive. For example, DevOps Guru works with a
     * <i>key</i> named <code>devops-guru-rds</code> and a <i>key</i> named
     * <code>DevOps-Guru-RDS</code>, and these act as two different <i>keys</i>.
     * Possible <i>key</i>/<i>value</i> pairs in your application might be
     * <code>Devops-Guru-production-application/RDS</code> or
     * <code>Devops-Guru-production-application/containers</code>.</p> 
     */
    inline TagCollection& WithAppBoundaryKey(const char* value) { SetAppBoundaryKey(value); return *this;}


    /**
     * <p>The values in an Amazon Web Services tag collection.</p> <p>The tag's
     * <i>value</i> is an optional field used to associate a string with the tag
     * <i>key</i> (for example, <code>111122223333</code>, <code>Production</code>, or
     * a team name). The <i>key</i> and <i>value</i> are the tag's <i>key</i> pair.
     * Omitting the tag <i>value</i> is the same as using an empty string. Like tag
     * <i>keys</i>, tag <i>values</i> are case-sensitive. You can specify a maximum of
     * 256 characters for a tag value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }

    /**
     * <p>The values in an Amazon Web Services tag collection.</p> <p>The tag's
     * <i>value</i> is an optional field used to associate a string with the tag
     * <i>key</i> (for example, <code>111122223333</code>, <code>Production</code>, or
     * a team name). The <i>key</i> and <i>value</i> are the tag's <i>key</i> pair.
     * Omitting the tag <i>value</i> is the same as using an empty string. Like tag
     * <i>keys</i>, tag <i>values</i> are case-sensitive. You can specify a maximum of
     * 256 characters for a tag value.</p>
     */
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }

    /**
     * <p>The values in an Amazon Web Services tag collection.</p> <p>The tag's
     * <i>value</i> is an optional field used to associate a string with the tag
     * <i>key</i> (for example, <code>111122223333</code>, <code>Production</code>, or
     * a team name). The <i>key</i> and <i>value</i> are the tag's <i>key</i> pair.
     * Omitting the tag <i>value</i> is the same as using an empty string. Like tag
     * <i>keys</i>, tag <i>values</i> are case-sensitive. You can specify a maximum of
     * 256 characters for a tag value.</p>
     */
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }

    /**
     * <p>The values in an Amazon Web Services tag collection.</p> <p>The tag's
     * <i>value</i> is an optional field used to associate a string with the tag
     * <i>key</i> (for example, <code>111122223333</code>, <code>Production</code>, or
     * a team name). The <i>key</i> and <i>value</i> are the tag's <i>key</i> pair.
     * Omitting the tag <i>value</i> is the same as using an empty string. Like tag
     * <i>keys</i>, tag <i>values</i> are case-sensitive. You can specify a maximum of
     * 256 characters for a tag value.</p>
     */
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::move(value); }

    /**
     * <p>The values in an Amazon Web Services tag collection.</p> <p>The tag's
     * <i>value</i> is an optional field used to associate a string with the tag
     * <i>key</i> (for example, <code>111122223333</code>, <code>Production</code>, or
     * a team name). The <i>key</i> and <i>value</i> are the tag's <i>key</i> pair.
     * Omitting the tag <i>value</i> is the same as using an empty string. Like tag
     * <i>keys</i>, tag <i>values</i> are case-sensitive. You can specify a maximum of
     * 256 characters for a tag value.</p>
     */
    inline TagCollection& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}

    /**
     * <p>The values in an Amazon Web Services tag collection.</p> <p>The tag's
     * <i>value</i> is an optional field used to associate a string with the tag
     * <i>key</i> (for example, <code>111122223333</code>, <code>Production</code>, or
     * a team name). The <i>key</i> and <i>value</i> are the tag's <i>key</i> pair.
     * Omitting the tag <i>value</i> is the same as using an empty string. Like tag
     * <i>keys</i>, tag <i>values</i> are case-sensitive. You can specify a maximum of
     * 256 characters for a tag value.</p>
     */
    inline TagCollection& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}

    /**
     * <p>The values in an Amazon Web Services tag collection.</p> <p>The tag's
     * <i>value</i> is an optional field used to associate a string with the tag
     * <i>key</i> (for example, <code>111122223333</code>, <code>Production</code>, or
     * a team name). The <i>key</i> and <i>value</i> are the tag's <i>key</i> pair.
     * Omitting the tag <i>value</i> is the same as using an empty string. Like tag
     * <i>keys</i>, tag <i>values</i> are case-sensitive. You can specify a maximum of
     * 256 characters for a tag value.</p>
     */
    inline TagCollection& AddTagValues(const Aws::String& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>The values in an Amazon Web Services tag collection.</p> <p>The tag's
     * <i>value</i> is an optional field used to associate a string with the tag
     * <i>key</i> (for example, <code>111122223333</code>, <code>Production</code>, or
     * a team name). The <i>key</i> and <i>value</i> are the tag's <i>key</i> pair.
     * Omitting the tag <i>value</i> is the same as using an empty string. Like tag
     * <i>keys</i>, tag <i>values</i> are case-sensitive. You can specify a maximum of
     * 256 characters for a tag value.</p>
     */
    inline TagCollection& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The values in an Amazon Web Services tag collection.</p> <p>The tag's
     * <i>value</i> is an optional field used to associate a string with the tag
     * <i>key</i> (for example, <code>111122223333</code>, <code>Production</code>, or
     * a team name). The <i>key</i> and <i>value</i> are the tag's <i>key</i> pair.
     * Omitting the tag <i>value</i> is the same as using an empty string. Like tag
     * <i>keys</i>, tag <i>values</i> are case-sensitive. You can specify a maximum of
     * 256 characters for a tag value.</p>
     */
    inline TagCollection& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

  private:

    Aws::String m_appBoundaryKey;
    bool m_appBoundaryKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagValues;
    bool m_tagValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
